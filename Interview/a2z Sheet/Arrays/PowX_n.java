public class PowX_n {
    /**
     * Brute Force Approach:
     * 1. Initialize a variable result to 1.
     * 2. Use a loop to multiply the base x by itself n times.
     * 3. Return the result.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     */
    public static double myPowBrute(double x, int n) {
        double result = 1.0;
        for (int i = 0; i < Math.abs(n); i++) {
            result *= x;
        }
        return n < 0 ? 1 / result : result;
    }

    /**
     * Optimal Approach:
     * 1. If n is negative, convert it to positive and set x to 1/x.
     * 2. Use recursion to calculate the power.
     * 3. If n is even, return the square of the result of x^(n/2).
     * 4. If n is odd, return x multiplied by the result of x^(n-1).
     * 
     * Time Complexity: O(log n)
     * Space Complexity: O(log n) due to recursion stack space.
     */
    public static double myPowOptimal(double x, int n) {
        double res = 1.0;
        long N = n;
        if (N < 0) {
            N = -1 * N;
        }
        while (N > 0) {
            if (N % 2 == 0) {
                x = x * x;
                N = N / 2;
            } else {
                res *= x;
                N = N - 1;
            }
        }
        return n < 0 ? 1 / res : res;
    }

    public static void main(String[] args) {
        double x = 2.0;
        int n = 10;
        System.out.println("Result: " + myPowBrute(x, n));
        System.out.println("Result: " + myPowOptimal(x, n));
    }
}
