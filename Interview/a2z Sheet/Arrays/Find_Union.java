import java.util.ArrayList;
import java.util.HashSet;

class Find_Union {
    /**
     * Brute Force Approch (Using HashSet):
     * 1. Create a HashSet to store the unique elements.
     * 2. Add all elements from the first array to the HashSet.
     * 3. Add all elements from the second array to the HashSet.
     * 4. Return the HashSet as an array.
     *
     * Time Complexity: O(n + m), where n and m are the lengths of the two arrays.
     * Space Complexity: O(n + m), for storing the elements in the HashSet.
     */
    public static ArrayList<Integer> findUnion(int[] a, int[] b) {
        HashSet<Integer> set = new HashSet<>();
        ArrayList<Integer> union = new ArrayList<>();
        for (int i : a) {
            set.add(i);
        }
        for (int i : b) {
            set.add(i);
        }
        for (int i : set) {
            union.add(i);
        }
        return union;
    }

    /**
     * Optimal Approach (Using Two Pointers):
     * 1. Sort both arrays in ascending order.
     * 2. Initialize two pointers, one for each array, pointing to the first
     * element.
     * 3. Compare the elements at the pointers and add the smaller element to the
     * union array.
     * 4. Increment the pointer of the array with the smaller element.
     * 5. Repeat steps 3 and 4 until both pointers reach the end of their respective
     * arrays.
     * 6. Return the union array.
     * 
     * Time Complexity: O(n + m), where n and m are the lengths of the two arrays.
     * Space Complexity: O(n + m), for storing the union array.
     */
    public static ArrayList<Integer> findUnionOptimal(int[] a, int[] b) {
        ArrayList<Integer> union = new ArrayList<>();
        int i = 0, j = 0;
        while (i < a.length && j < b.length) {
            if (a[i] < b[j]) {
                union.add(a[i++]);
            } else if (a[i] > b[j]) {
                union.add(b[j++]);
            } else {
                union.add(a[i++]);
                j++;
            }
        }
        while (i < a.length) {
            union.add(a[i++]);
        }
        while (j < b.length) {
            union.add(b[j++]);
        }
        return union;
    }

    public static void main(String[] args) {
        int[] a = { 1, 2, 3, 4, 5 };
        int[] b = { 2, 3, 4, 5, 6 };
        ArrayList<Integer> union = findUnion(a, b);
        System.out.print("Union of the two arrays: ");
        for (int num : union) {
            System.out.print(num + " ");
        }
        System.out.println();
        ArrayList<Integer> unionOptimal = findUnionOptimal(a, b);
        System.out.print("Union of the two arrays (Optimal): ");
        for (int num : unionOptimal) {
            System.out.print(num + " ");
        }
    }
}