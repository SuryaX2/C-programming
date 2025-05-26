public class Search_In_2D_Matrix {
    /**
     * Brute Force Approach:
     * 1. Iterate through each element in the 2D array.
     * 2. Check if the current element matches the target.
     * 3. If a match is found, return true.
     * 4. If no match is found, return false.
     * 
     * Time Complexity: O(n * m), where n = number of rows and m = number of columns
     * in the matrix.
     * Space Complexity: O(1)
     */
    public static boolean searchMatrixBrute(int[][] a, int target) {
        int n = a.length, m = a[0].length;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == target) {
                    return true;
                }
            }
        }
        return false;
    }

    /**
     * Optimal Approach:
     * 1. Treat the 2D matrix as a sorted 1D array.
     * 2. Use binary search to find the target.
     * 3. Calculate the row and column indices based on the mid index.
     * 4. Check if the element at the calculated indices matches the target.
     * 5. If a match is found, return true.
     * 6. If the target is less than the current element, search in the left half of
     * the matrix.
     * 7. If the target is greater than the current element, search in the right
     * half of the matrix.
     * 8. If no match is found, return false.
     * 
     * Time Complexity: O(log(n * m)), where n = number of rows and m = number of
     * columns in the matrix.
     * Space Complexity: O(1)
     */
    public static boolean searchMatrixOptimal(int[][] a, int target) {
        int n = a.length, m = a[0].length;
        int low = 0, high = (n * m) - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int r = mid / m; // Calculate row index
            int c = mid % m; // Calculate column index
            if (a[r][c] == target) {
                return true;
            } else if (a[r][c] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }

        }
        return false;
    }

    public static void main(String[] args) {
        int[][] matrix = {
                { 3, 4, 7, 9 },
                { 12, 13, 16, 18 },
                { 20, 21, 23, 29 }
        };
        int target = 23;
        boolean found = searchMatrixBrute(matrix, target);
        System.out.println("Found using brute force: " + found);
        found = searchMatrixOptimal(matrix, target);
        System.out.println("Found using optimized approach: " + found);
    }
}
