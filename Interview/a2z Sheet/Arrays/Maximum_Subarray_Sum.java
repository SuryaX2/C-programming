public class Maximum_Subarray_Sum {
    /**
     * Brute Force Approach:
     * 1. Iterate through all possible subarrays and calculate their sums.
     * 2. Keep track of the maximum sum encountered.
     * 3. Return the maximum sum.
     * 
     * Time Complexity: O(n^3)
     * Space Complexity: O(1)
     */
    public static int maxSubarrayBrute(int[] a) {
        int maxSum = Integer.MIN_VALUE;
        for (int i = 0; i < a.length; i++) {
            for (int j = i; j < a.length; j++) {
                int sum = 0;
                for (int k = i; k <= j; k++) {
                    sum += a[k];
                }
                maxSum = Math.max(maxSum, sum);
            }
        }
        return maxSum;
    }

    /**
     * Better Approach:
     * 1. Use a nested loop to iterate through all possible subarrays.
     * 2. Keep track of the current sum and the maximum sum encountered.
     * 3. Return the maximum sum.
     * 
     * Time Complexity: O(n^2)
     * Space Complexity: O(1)
     */
    public static int maxSubarrayBetter(int[] a) {
        int maxSum = Integer.MIN_VALUE;
        for (int i = 0; i < a.length; i++) {
            int sum = 0;
            for (int j = i; j < a.length; j++) {
                sum += a[j];
                maxSum = Math.max(maxSum, sum);
            }
        }
        return maxSum;
    }

    /**
     * Optimal Approach (Kadane's Algorithm):
     * 1. Initialize two variables: maxSum and currentSum.
     * 2. Set maxSum to the first element of the array.
     * 3. Set currentSum to the first element of the array.
     * 4. Iterate through the array starting from the second element.
     * 5. Update currentSum by adding the current element to it.
     * 6. Update maxSum if currentSum is greater than maxSum.
     * 7. If currentSum becomes negative, set it to 0.
     * 8. Return the maximum sum.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     */
    public static int maxSubarrayOptimal(int[] a) {
        int maxSum = a[0], sum = a[0];
        for (int i = 0; i < a.length; i++) {
            sum += a[i];
            maxSum = (sum > maxSum) ? sum : maxSum;
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxSum;
    }

    /**
     * Follupw-up Problem:
     * Prints the maximum subarray sum and the subarray itself.
     * 1. Initialize variables to keep track of the maximum sum and the start and
     * end indices of the subarray.
     * 2. Iterate through the array and calculate the sum of the subarray starting
     * from each index.
     * 3. If the sum of the subarray is greater than the current maximum sum, update
     * the maximum sum and the start and end indices of the subarray.
     * 4. If the sum of the subarray is less than 0, reset the sum to 0.
     * 5. Return the maximum sum and the start and end indices of the subarray.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     */
    public static int maxSubarraySumPrint(int[] arr, int n) {
        int maxi = Integer.MIN_VALUE; // maximum sum
        int sum = 0, start = 0;
        int ansStart = -1, ansEnd = -1;
        for (int i = 0; i < n; i++) {
            if (sum == 0)
                start = i;
            sum += arr[i];
            if (sum > maxi) {
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }
            if (sum < 0) {
                sum = 0;
            }
        }
        // printing the subarray:
        System.out.print("The subarray is: [");
        for (int i = ansStart; i <= ansEnd; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.print("]\n");
        return maxi;
    }

    public static void main(String[] args) {
        int[] a = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
        System.out.println("Maximum Subarray Sum (Brute Force): " + maxSubarrayBrute(a));
        System.out.println("Maximum Subarray Sum (Better): " + maxSubarrayBetter(a));
        System.out.println("Maximum Subarray Sum (Optimal): " + maxSubarrayOptimal(a));
        System.out.println("Maximum Subarray Sum (Print): " + maxSubarraySumPrint(a, a.length));
    }
}
