// Problem: https://leetcode.com/problems/next-permutation/description/

public class Next_Permutation {
    private static void swap(int[] a, int i, int j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    private static void reverse(int[] a, int start, int end) {
        while (start < end) {
            swap(a, start, end);
            start++;
            end--;
        }
    }

    public static int[] nextPermutation(int[] a) {
        int n = a.length;
        int index = -1;
        // Find the First Breaking Point (from the end)
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] < a[i + 1]) {
                index = i;
                break;
            }
        }
        // If the array is in descending order, reverse it to get the smallest
        // permutation
        // If the index is -1, it means the array is in descending order
        if (index == -1) {
            reverse(a, 0, n - 1);
            return a;
        }
        for (int i = n - 1; i > index; i--) {
            if (a[i] > a[index]) {
                swap(a, i, index);
                break;
            }
        }
        reverse(a, index + 1, n - 1);
        return a;
    }

    public static void main(String[] args) {
        int[] nums = { 2, 1, 5, 4, 3, 0, 0 };
        nextPermutation(nums);
        for (int num : nums) {
            System.out.print(num + " ");
        }
    }
}
