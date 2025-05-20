public class Duplicate_In_Array_N_1 {

    /**
     * Brute Force Approach:
     * 1. Sort the array.
     * 2. Check a[i] == a[i+1]
     * 3. If true, return a[i].
     * 4. Else, return -1.
     * 
     * Time Complexity: O(nlogn)
     * Space Complexity: O(1)
     */
    public static int findDuplicateBruteForce(int[] a, int n) {
        java.util.Arrays.sort(a);
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                return a[i];
            }
        }
        return -1;
    }

    /**
     * Better Approach:
     * 1. Create a frequency array of size n+1.
     * 2. Traverse the original array and increment the frequency of each element in
     * the frequency array.
     * 3. If the frequency of an element is greater than 1, return that element.
     * 4. Else, return -1.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(n)
     */
    public static int findDuplicateBetter(int[] a, int n) {
        int[] freq = new int[n + 1];
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
            if (freq[a[i]] > 1) {
                return a[i];
            }
        }
        return -1;
    }

    /**
     * Optimal Approach (Linked List Cycle Detection):
     * 1. Use Floyd's Tortoise and Hare algorithm to detect the cycle.
     * 2. The duplicate number is the entry point of the cycle.
     * 3. Initialize two pointers, slow and fast.
     * 4. Move slow by one step and fast by two steps until they meet.
     * 5. Reset one pointer to the start and move both pointers one step at a time
     * until they meet again.
     * 6. The meeting point is the duplicate number.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     */
    public static int findDuplicateOptimal(int[] a, int n) {
        int slow = a[0];
        int fast = a[0];
        do {
            slow = a[slow];
            fast = a[a[fast]];
        } while (slow != fast);
        fast = a[0];
        while (slow != fast) {
            slow = a[slow];
            fast = a[fast];
        }
        return slow;
    }

    public static void main(String[] args) {
        int[] a = { 2, 5, 9, 6, 9, 3, 8, 9, 7, 1 };
        int n = a.length;
        System.out.println("Duplicate in array: (Brute Force) : " + findDuplicateBruteForce(a, n));
        System.out.println("Duplicate in array: (Better) : " + findDuplicateBetter(a, n));
        System.out.println("Duplicate in array: (Optimal) : " + findDuplicateOptimal(a, n));
    }
}