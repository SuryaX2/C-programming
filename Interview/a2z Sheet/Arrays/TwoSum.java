import java.util.Arrays;
import java.util.HashMap;

public class TwoSum {
    /**
     * Brute Force Approach:
     * 1. Iterate through each element of the array.
     * 2. For each element, iterate through the rest of the array and check if the
     * sum of the two elements is equal to the target.
     * 3. If found, return the indices of the two elements.
     * 4. If not found, return an empty array.
     * 
     * Time Complexity: O(n^2)
     * Space Complexity: O(1)
     */
    public static int[] twoSumBrute(int[] a, int target) {
        for (int i = 0; i < a.length; i++) {
            for (int j = i + 1; j < a.length; j++) {
                if (a[i] + a[j] == target) {
                    return new int[] { i, j };
                }
            }
        }
        return new int[] { -1, -1 };
    }

    /**
     * Better Approach (Using HashMap):
     * 1. Create a HashMap to store the elements and their indices.
     * 2. Iterate through the array and add each element to the HashMap.
     * 3. For each element, check if the difference between the target and the
     * element is present in the HashMap.
     * 4. If found, return the indices of the two elements.
     * 5. If not found, add the element and its index to the HashMap.
     * 6. If no pair is found, return an empty array.
     *
     * Time Complexity: O(n)
     * Space Complexity: O(n)
     */
    public static int[] twoSumBetter(int[] a, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < a.length; i++) {
            int diff = target - a[i];
            if (map.containsKey(diff)) {
                return new int[] { map.get(diff), i };
            }
            map.put(a[i], i);
        }
        return new int[] { -1, -1 };
    }

    /**
     * Optimal Approach (Using Two Pointers):
     * 1. Sort the array in ascending order.
     * 2. Initialize two pointers, one at the beginning and one at the end of the
     * array.
     * 3. If the sum of the elements at the pointers is equal to the target, return
     * the indices of the two elements.
     * 4. If the sum of the elements at the pointers is less than the target, move
     * the left pointer to the right.
     * 5. If the sum of the elements at the pointers is greater than the target,
     * move the right pointer to the left.
     * 6. If no pair is found, return an empty array.
     *
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     */
    public static int[] twoSumOptimal(int[] a, int target) {
        Arrays.sort(a);
        int left = 0, right = a.length - 1;
        while (left < right) {
            int sum = a[left] + a[right];
            if (sum == target) {
                return new int[] { left, right };
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return new int[] { -1, -1 };
    }

    public static void main(String[] args) {
        int[] nums = { 2, 7, 11, 15 };
        int target = 9;
        int[] result = twoSumBrute(nums, target);
        System.out.println("Brute Force Result: [" + result[0] + ", " + result[1] + "]");
        result = twoSumBetter(nums, target);
        System.out.println("Better Result: [" + result[0] + ", " + result[1] + "]");
        result = twoSumOptimal(nums, target);
        System.out.println("Optimal Result: [" + result[0] + ", " + result[1] + "]");
    }
}
