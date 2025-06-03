import java.util.ArrayList;
import java.util.HashMap;

public class Majority_Element_N_3 {
    /**
     * Brute Force Approach:
     * 1. Iterate through each element in the array.
     * 2. For each element, count its occurrences in the array.
     * 3. If the count is greater than n/3, add the element to the result array.
     * 4. Stop when two elements are found that satisfy the condition.
     * 5. Return the result array.
     * 
     * Time Complexity: O(n^2)
     * Space Complexity: O(1) (not counting the result array)
     */
    public static ArrayList<Integer> majorityElementsBrute(int[] a) {
        ArrayList<Integer> res = new ArrayList<>();
        int n = a.length;
        for (int i = 0; i < n; i++) {
            int count = 0;
            if (res.size() == 0 || res.get(0) != a[i]) {
                for (int j = 0; j < n; j++) {
                    if (a[i] == a[j]) {
                        count++;
                    }
                }
                if (count > n / 3) {
                    res.add(a[i]);
                }
                if (res.size() == 2) {
                    break;
                }
            }
        }
        return res;
    }

    /**
     * Better Approach (using HashMap):
     * 1. Use a HashMap to count the occurrences of each element in the array.
     * 2. Iterate through the HashMap and check if any element's count is greater
     * than n/3.
     * 3. If found, add the element to the result array.
     * 4. Stop when two elements are found that satisfy the condition.
     * 5. Return the result array.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(n) (for the HashMap)
     */
    public static ArrayList<Integer> majorityElementsBetter(int[] a) {
        ArrayList<Integer> res = new ArrayList<>();
        int n = a.length;
        int min = (n / 3) + 1;
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < n; i++) {
            map.put(a[i], map.getOrDefault(a[i], 0) + 1);
            if (map.get(a[i]) == min) {
                res.add(a[i]);
            }
            if (res.size() == 2) {
                break;
            }
        }
        return res;
    }

    /**
     * Optimal Approach:
     */
    public static ArrayList<Integer> majorityElementsOptimal(int[] a) {
        ArrayList<Integer> res = new ArrayList<>();
        int n = a.length;
        int c1 = 0, c2 = 0, e1 = Integer.MIN_VALUE, e2 = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            if (c1 == 0 && e2 != a[i]) {
                c1 = 1;
                e1 = a[i];
            } else if (c2 == 0 && e1 != a[i]) {
                c2 = 1;
                e2 = a[i];
            } else if (e1 == a[i])
                c1++;
            else if (e2 == a[i])
                c2++;
            else {
                c1--;
                c2--;
            }
        }
        c1 = 0;
        c2 = 0;
        for (int i = 0; i < n; i++) {
            if (e1 == a[i])
                c1++;
            else if (e2 == a[i])
                c2++;
        }
        if (c1 > n / 3) {
            res.add(e1);
        }
        if (c2 > n / 3) {
            res.add(e2);
        }
        return res;
    }

    public static void main(String[] args) {
        int[] a = { 1, 1, 1, 1, 3, 2, 2, 2 };
        ArrayList<Integer> result = majorityElementsBrute(a);
        System.out.println("Majority Elements (Brute Force): " + result);
        result = majorityElementsBetter(a);
        System.out.println("Majority Elements (Better Approach): " + result);
        result = majorityElementsOptimal(a);
        System.out.println("Majority Elements (Optimal Approach): " + result);
    }
}
