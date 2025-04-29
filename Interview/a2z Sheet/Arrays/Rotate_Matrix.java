public class Rotate_Matrix {
    public static void printMatrix(int[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    /**
     * Brute Force Approach:
     * 1. Create a new matrix of the same size as the original matrix.
     * 2. Iterate through the original matrix and place each element in the new
     * matrix at the rotated position.
     * 3. Return the new matrix.
     *
     * Time Complexity: O(n^2) where n is the number of rows/columns in the matrix.
     * Space Complexity: O(n^2) for the new matrix.
     */
    public static void rotateBrute(int[][] a) {
        int n = a.length;
        int[][] ans = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ans[j][n - i - 1] = a[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = ans[i][j];
            }
        }
    }

    /**
     * Optimal Approach (In-Place):
     * 1. Transpose the matrix (swap rows with columns).
     * 2. Reverse each row of the transposed matrix.
     *
     * Time Complexity: O(n^2) where n is the number of rows/columns in the matrix.
     * Space Complexity: O(1) as we are modifying the matrix in place.
     */
    public static void rotateOptimal(int[][] a) {
        int n = a.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
        int start = 0, end = n - 1;
        while (start < end) {
            for (int i = 0; i < n; i++) {
                int temp = a[i][start];
                a[i][start] = a[i][end];
                a[i][end] = temp;
            }
            start++;
            end--;
        }
    }

    public static void main(String[] args) {
        int[][] matrix = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
        System.out.println("Original Matrix:");
        printMatrix(matrix);
        System.out.println("Rotated Matrix (Brute Force):");
        rotateBrute(matrix);
        printMatrix(matrix);
        matrix = new int[][] { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
        System.out.println("Rotated Matrix (In-Place):");
        rotateOptimal(matrix);
        printMatrix(matrix);
    }
}
