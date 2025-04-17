#include "./utility.c"

/**
 * Brute Force Approach:
 * 1. Traverse the array and count the number of consecutive 1's.
 * 2. Keep track of the maximum count of consecutive 1's found so far.
 * 3. Return the maximum count.
 *
 * Time complexity: O(n)
 * Space complexity: O(1)
 */
int maxConsecutiveOnes(int a[], int n) {
    int max = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            count++;
            max = (count > max) ? count : max;
        } else {
            count = 0;
        }
    }
    return max;
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    scanArray(a, n);
    int result = maxConsecutiveOnes(a, n);
    printf("The maximum number of consecutive 1's in the array is: %d\n", result);
    return 0;
}