import java.util.HashMap;

public class Majority_Element {
    /**
     * Brute Force Approach:
     * 1. Count the frequency of each element in the array.
     * 2. If the frequency of an element is greater than n/2, return that element.
     *
     * Time Complexity: O(n^2)
     * Space Complexity: O(1)
     */
    public static int majorityElementBrute(int[] a) {
        for (int i = 0; i < a.length; i++) {
            int count = 0;
            for (int j = 0; j < a.length; j++) {
                if (a[i] == a[j]) {
                    count++;
                }
            }
            if (count > a.length / 2) {
                return a[i];
            }
        }
        return -1;
    }

    /**
     * Better Approach (Using HashMap):
     * 1. Create a HashMap to store the frequency of each element.
     * 2. Iterate through the array and update the frequency in the HashMap.
     * 3. If the frequency of an element is greater than n/2, return that element.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(n)
     */
    public static int majorityElementBetter(int[] a) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < a.length; i++) {
            int count = map.getOrDefault(a[i], 0);
            map.put(a[i], count + 1);
            if (map.get(a[i]) > a.length / 2) {
                return a[i];
            }
        }
        return -1;
    }

    /**
     * Optimal Approach (Using Boyer-Moore Voting Algorithm):
     * 1. Initialize a candidate and a count variable.
     * 2. Iterate through the array and update the candidate and count based on the
     * current element.
     * 3. If the count becomes 0, update the candidate to the current element.
     * 4. Return the candidate as the majority element.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     */
    public static int majorityElementOptimal(int[] a) {
        int element = 0, count = 0;
        for (int i = 0; i < a.length; i++) {
            if (count == 0) {
                element = a[i];
                count = 1;
            } else if (a[i] == element) {
                count++;
            } else {
                count--;
            }
        }
        count = 0;
        for (int i = 0; i < a.length; i++) {
            if (a[i] == element) {
                count++;
            }
        }
        if (count > a.length / 2) {
            return element;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] a = { 2, 2, 1, 1, 1, 2, 2 };
        System.out.println("Majority Element (Brute Force): " + majorityElementBrute(a));
        System.out.println("Majority Element (Better): " + majorityElementBetter(a));
        System.out.println("Majority Element (Optimal): " + majorityElementOptimal(a));
    }
}
