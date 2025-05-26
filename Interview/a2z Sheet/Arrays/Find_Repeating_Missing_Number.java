public class Find_Repeating_Missing_Number {
    /**
     * Brute Force Approach:
     * 1.Loop through the array and count each element's frequency.
     * 2. Identify the repeating element (count > 1).
     * 3. Identify the missing element (count == 0).
     *
     * Time Complexity: O(n^2)
     * Space Complexity: O(1)
     */
    public static int[] findRepeatingMissingBrute(int[] a) {
        int n = a.length;
        int repeating = -1, missing = -1;
        for (int i = 1; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (a[j] == i)
                    count++;
            }
            if (count > 1)
                repeating = i;
            if (count == 0)
                missing = i;
            if (repeating != -1 && missing != -1)
                break;
        }
        return new int[] { repeating, missing };
    }

    /**
     * Better Approach (Using HashMap):
     * 1. Create a HashMap to store the frequency of each element.
     * 2. Iterate through the array and update the frequency in the HashMap.
     * 3. Identify the repeating element (count > 1).
     * 4. Identify the missing element (count == 0).
     *
     * Time Complexity: O(n)
     * Space Complexity: O(n)
     */
    public static int[] findRepeatingMissingBetter(int[] a) {
        int n = a.length;
        int[] hash = new int[n + 1];
        int repeating = -1, missing = -1;
        for (int i = 0; i < n; i++) {
            hash[a[i]]++;
        }
        for (int i = 1; i < n + 1; i++) {
            if (hash[i] > 1)
                repeating = i;
            if (hash[i] == 0)
                missing = i;
            if (repeating != -1 && missing != -1)
                break;
        }
        return new int[] { repeating, missing };
    }

    /**
     * Optimal Approach (Mathematical):
     * 1. Calculate the expected sum and sum of squares for numbers from 1 to n.
     * 2. Calculate the sum and sum of squares for the given array.
     * 3. Subtract the expected sum and sum of squares from the actual sum and sum
     * of squares.
     * 4. Solve the two equations to find the repeating and missing numbers.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     */
    public static int[] findRepeatingMissingOptimal(int[] a) {
        int n = a.length;
        int x = 0, y = 0;
        int s1 = 0, s2 = 0, sn = 0, s2n = 0;
        sn = (n * (n + 1)) / 2;
        s2n = (n * (n + 1) * (2 * n + 1)) / 6;
        for (int i = 0; i < n; i++) {
            s1 += a[i];
            s2 += a[i] * a[i];
        }
        int eq1 = s1 - sn; // x - y
        int eq2 = s2 - s2n; // x^2 - y^2
        eq2 = eq2 / eq1; // x + y
        x = (eq1 + eq2) / 2; // x = (x - y + x + y) / 2
        y = x - eq1; // y = x - (x - y)
        return new int[] { x, y };
    }

    public static void main(String[] args) {
        int[] a = { 4, 3, 6, 2, 1, 1 };
        int[] res = findRepeatingMissingBrute(a);
        System.out.println("Brute Force Approach:");
        System.out.println("Repeating: " + res[0] + ", Missing: " + res[1]);
        res = findRepeatingMissingBetter(a);
        System.out.println("Better Approach:");
        System.out.println("Repeating: " + res[0] + ", Missing: " + res[1]);
        res = findRepeatingMissingOptimal(a);
        System.out.println("Optimal Approach:");
        System.out.println("Repeating: " + res[0] + ", Missing: " + res[1]);
    }
}
