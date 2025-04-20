import java.util.HashMap;

public class Longest_Subarray_WithSumK_pos_neg {
    /**
     * Better Approach:
     * 1. Iterate through each element of the array.
     * 2. For each element, iterate through the rest of the array and calculate the
     * sum of the subarray starting from that element.
     * 3. If the sum of the subarray is equal to k, update the length of the longest
     * subarray.
     * 4. Return the length of the longest subarray.
     * 
     * Time Complexity: O(n^2)
     * Space Complexity: O(1)
     */
    public static int longestSubarrayBetter(int[] a, int k) {
        int n = a.length, len = 0;
        for (int i = 0; i < n; i++) {
            int s = 0;
            for (int j = i; j < n; j++) {
                s += a[j];
                if (s == k) {
                    len = Math.max(len, j - i + 1);
                }
            }
        }
        return len;
    }

    /**
     * Optimal Approach:
     * 1. Use a HashMap to store the sum of the subarray starting from each index.
     * 2. Iterate through the array and calculate the sum of the subarray starting
     * from each index.
     * 3. If the sum of the subarray is equal to k, update the length of the longest
     * subarray.
     * 4. Return the length of the longest subarray.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(n)
     */
    public static int longestSubarrayOptimal(int[] a, int k) {
        int sum = 0, len = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        map.put(0, -1);
        for (int i = 0; i < a.length; i++) {
            sum += a[i];
            if (map.containsKey(sum - k)) {
                len = Math.max(len, i - map.get(sum - k));
            }
            if (!map.containsKey(sum)) {
                map.put(sum, i);
            }
        }
        return len;
    }

    public static void main(String[] args) {
        int[] a = { 1, 2, -1, 3, -2, 4, -1, 5 };
        int k = 3,len=0;
        len = longestSubarrayBetter(a, k);
        System.out.println("Length of longest subarray with sum " + k + " (Better): " + len);
        len = longestSubarrayOptimal(a, k);
        System.out.println("Length of longest subarray with sum " + k + " (Optimal): " + len);
    }
}
