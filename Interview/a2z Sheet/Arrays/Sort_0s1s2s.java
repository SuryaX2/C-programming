import java.util.Arrays;

public class Sort_0s1s2s {
    /**
     * Brute force approach:
     * 1. Sort the array using a sorting algorithm (e.g., Quick sort, Merge sort).
     * 
     * Time complexity: O(nlogn)
     * Space complexity: O(1)
     */
    public static void sort012_Brute(int[] a) {
        // Using built-in sort function for simplicity
        Arrays.sort(a);
        // Alternatively, you can implement your own sorting algorithm here.
        // For example, using Quick sort or Merge sort.
    }

    /**
     * Better approach:
     * 1. Count the number of 0s, 1s, and 2s in the array.
     * 2. Replace the elements in the array with 0s, 1s, and 2s in the correct
     * order.
     * 
     * Time complexity: O(n)
     * Space complexity: O(1)
     */
    public static void sort012_Better(int[] a) {
        int c0 = 0, c1 = 0, c2 = 0;
        for (int i : a) {
            if (i == 0) {
                c0++;
            } else if (i == 1) {
                c1++;
            } else {
                c2++;
            }
        }
        for (int i = 0; i < a.length; i++) {
            if (i < c0) {
                a[i] = 0;
            } else if (i < c0 + c1) {
                a[i] = 1;
            } else {
                a[i] = 2;
            }
        }
    }

    /**
     * Optimal approach (Dutch National Flag problem):
     * 1. Use 3 pointers (low, mid, high) to partition the array into three parts:
     * 2. low points to the next position for 0, mid points to the current element,
     * and high points to the next position for 2.
     * 3. If the current element is 0, swap it with the element at low and increment
     * low. If the current element is 2, swap it with the element at high and
     * decrement high. If the current element is 1, just increment mid.
     * 4. Repeat until mid is greater than high.
     * 
     * Time complexity: O(n)
     * Space complexity: O(1)
     */
    public static void sort012_Optimal(int[] a) {
        int low = 0, mid = 0, high = a.length - 1;
        while (mid <= high) {
            if (a[mid] == 0) {
                int temp = a[low];
                a[low] = a[mid];
                a[mid] = temp;
                low++;
                mid++;
            } else if (a[mid] == 2) {
                int temp = a[mid];
                a[mid] = a[high];
                a[high] = temp;
                high--;
            } else {
                mid++;
            }
        }
    }

    public static void main(String[] args) {
        int[] a = { 0, 1, 2, 0, 1, 2, 0, 1, 2 };
        sort012_Brute(a);
        System.out.println("Brute force approach:");
        utility.printArray(a);
        System.out.println();
        int[] b = { 0, 1, 2, 0, 1, 2, 0, 1, 2 };
        sort012_Better(b);
        System.out.println("Better approach:");
        utility.printArray(b);
        System.out.println();
        int[] c = { 0, 1, 2, 0, 1, 2, 0, 1, 2 };
        sort012_Optimal(c);
        System.out.println("Optimal approach:");
        utility.printArray(c);
        System.out.println();
    }
}
