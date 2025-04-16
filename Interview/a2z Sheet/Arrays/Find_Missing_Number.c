#include "./utility.c"

/**
 * Brute force approach
 * Time complexity: O(n^2) - Hypothetical worst case, as we are using nested loops.
 * Space complexity: O(1)
 */
int findMissingNumber(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < n - 1; j++) {
            if (a[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            return i;
        }
    }
}

/**
 * Better approach (Hashing)
 * Time complexity: O(n) - We are using a single loop to check for the missing number.
 * Space complexity: O(n) - We are using an array of size n to store the frequency of each number.
 */
int findMissingNumber(int a[], int n) {
    int hash[100] = {0};
    for (int i = 0; i < n - 1; i++) {
        hash[a[i]] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }
}

/**
 * Optimal approach (Mathematical formula)
 * Time complexity: O(n) - We are using a single loop to calculate the sum of the first n numbers.
 * Space complexity: O(1) - We are using a constant amount of space to store the sum.
 */
int findMissingNumber(int a[], int n) {
    int sumExpected = (n * (n + 1)) / 2;
    int sumActual = 0;
    for (int i = 0; i < n - 1; i++) {
        sumActual += a[i];
    }
    return sumExpected - sumActual;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    scanArray(a, n);
    int missingNumber = findMissingNumber(a, n);
    printf("The missing number in the array is: %d\n", missingNumber);
    return 0;
}