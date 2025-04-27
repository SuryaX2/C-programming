public class Set_Matrix_Zeroes {
    private static void printMatrix(int[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    /**
     * Brute force approach:
     * 1. Traverse the matrix and find the zeroes.
     * 2. For each zero, set the entire row and column to -1.
     * 3. Traverse the matrix again and set all -1s to 0.
     * 
     * Time complexity: O(m*n)*O(m+n) + O(m*n) = O(m*n)
     * Space complexity: O(1)
     */
    private static void markRow(int[][] matrix, int i) {
        int c = matrix[0].length;
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] != 0) {
                matrix[i][j] = -1;
            }
        }
    }

    private static void markCol(int[][] matrix, int j) {
        int r = matrix.length;
        for (int i = 0; i < r; i++) {
            if (matrix[i][j] != 0) {
                matrix[i][j] = -1;
            }
        }
    }

    public static void setZeroesBrute(int[][] matrix) {
        int r = matrix.length;
        int c = matrix[0].length;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == 0) {
                    markRow(matrix, i);
                    markCol(matrix, j);
                }
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == -1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    /**
     * Better approach:
     * 1. Traverse the matrix and find the zeroes.
     * 2. Make a boolean array row[] and col[] of size m and n respectively.
     * 3. For each zero, set row[i] = true and col[j] = true.
     * 4. Traverse the matrix again and set all row[i] = true and col[j] = true to
     * 0.
     * 
     * Time complexity: O(m*n) + O(m*n) = O(m*n)
     * Space complexity: O(m) + O(n) = O(m+n)
     */
    public static void setZeroesBetter(int[][] matrix) {
        int r = matrix.length;
        int c = matrix[0].length;
        boolean[] row = new boolean[r];
        boolean[] col = new boolean[c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = true;
                    col[j] = true;
                }
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    /**
     * Optimal approach (in-place):
     * 1. Use the first row and first column as markers.
     * 2. Traverse the matrix and for each zero, set the first row and first column
     * to 0.
     * 3. For each zero, set the first row and first column to 0.
     * 4. Traverse the matrix again and set all first row and first column to 0.
     * 5. Finally, set the first row and first column to 0 if they were marked.
     * 
     * Time complexity: O(m*n) + O(m*n) = O(m*n)
     * Space complexity: O(1)
     */
    public static void setZeroesOptimal(int[][] matrix) {
        int r = matrix.length;
        int c = matrix[0].length;
        int col0 = 1;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0; // mark the ith row
                    if (j != 0) {
                        matrix[0][j] = 0; // mark the jth column
                    } else {
                        col0 = 0; // mark the first column
                    }
                }
            }
        }

        for (int i = 1; i < r; i++) {
            for (int j = 1; j < c; j++) {
                if (matrix[i][j] != 0) {
                    if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }

                }
            }
        }
        if (matrix[0][0] == 0) {
            for (int j = 0; j < c; j++) {
                matrix[0][j] = 0;
            }
        }
        if (col0 == 0) {
            for (int i = 0; i < r; i++) {
                matrix[i][0] = 0;
            }
        }
    }

    public static void main(String[] args) {
        int[][] matrix = {
                { 1, 1, 1, 1 },
                { 1, 0, 0, 1 },
                { 1, 1, 0, 1 },
                { 1, 1, 1, 1 }
        };
        System.out.println("Before setting zeroes:");
        printMatrix(matrix);
        setZeroesBrute(matrix);
        System.out.println("After setting zeroes (Brute Force):");
        printMatrix(matrix);
        matrix = new int[][] {
                { 1, 1, 1, 1 },
                { 1, 0, 0, 1 },
                { 1, 1, 0, 1 },
                { 1, 1, 1, 1 }
        };
        System.out.println("After setting zeroes (Better):");
        setZeroesBetter(matrix);
        printMatrix(matrix);
        matrix = new int[][] {
                { 1, 1, 1, 1 },
                { 1, 0, 0, 1 },
                { 1, 1, 0, 1 },
                { 1, 1, 1, 1 }
        };
        System.out.println("After setting zeroes (Optimal):");
        setZeroesOptimal(matrix);
        printMatrix(matrix);
    }
}
