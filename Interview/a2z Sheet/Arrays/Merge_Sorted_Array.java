import java.util.Arrays;

public class Merge_Sorted_Array {
    /**
     * Brute force approach (with extra space):
     * 1. Create a new array of size m + n.
     * 2. Copy the elements while checking which element is smaller.
     * 3. Copy the remaining elements of the array that has not been fully
     * traversed.
     * 4. Copy the new array to the original arrays.
     * 
     * Time complexity: O(m + n)
     * Space complexity: O(m + n)
     */
    public static void mergeBrute(int[] a, int[] b, int n, int m) {
        int[] c = new int[m + n];
        int left = 0, right = 0, i = 0;
        while (left < n && right < m) {
            if (a[left] < b[right]) {
                c[i++] = a[left++];
            } else {
                c[i++] = b[right++];
            }
        }
        while (left < n) {
            c[i++] = a[left++];
        }
        while (right < m) {
            c[i++] = b[right++];
        }
        for (i = 0; i < c.length; i++) {
            if (i < n) {
                a[i] = c[i];
            } else {
                b[i - n] = c[i];
            }
        }
    }

    /**
     * Optimal approach (without extra space):
     * 1. Start from the end of 1st array and from the first of the 2nd array.
     * 2. Compare the elements and swap them if the element of the 1st array is
     * greater than the element of the 2nd array.
     * 3. Sort the both the array.
     * 
     * Time complexity: O(min(m, n) + nlogn + mlogm)
     * Space complexity: O(1)
     */
    public static void mergeOptimal(int[] a, int[] b, int n, int m) {
        int left = n - 1, right = 0;
        while (left >= 0 && right < m) {
            if (a[left] > b[right]) {
                int temp = a[left];
                a[left] = b[right];
                b[right] = temp;
                
                left--;
                right++;
            } else {
                break;
            }
        }
        Arrays.sort(a);
        Arrays.sort(b);
    }

    public static void main(String[] args) {
        int[] a = { 1, 3, 5, 7 };
        int[] b = { 0, 2, 6, 8, 9 };
        System.out.println("Brute force approach:");
        mergeBrute(a, b, a.length, b.length);
        utility.printArray(a);
        System.out.println();
        utility.printArray(b);
        System.out.println();

        a = new int[] { 1, 3, 5, 7 };
        b = new int[] { 0, 2, 6, 8, 9 };
        System.out.println("Optimal approach:");
        mergeOptimal(a, b, a.length, b.length);
        utility.printArray(a);
        System.out.println();
        utility.printArray(b);
    }
}
