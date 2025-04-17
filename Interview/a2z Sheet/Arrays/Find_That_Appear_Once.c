#include "./utility.c"

/**
 * Brute Force Approach:
 * 1. Traverse the array and count the number of occurrences of each element.
 * 2. Return the element that appears once.
 *
 * Time complexity: O(n^2)
 * Space complexity: O(1)
 */
int appearOnce(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int c = 0, num = a[i];
        for (int j = 0; j < n; j++) {
            if (a[j] == num) {
                c++;
            }
        }
        if (c == 1) {
            return num;
        }
    }
}

/**
 * Better Approach (Using Hashing):
 * 1. Use a hash table to store the count of each element.
 * 2. Return the element that appears once.
 *
 * Time complexity: O(n)
 * Space complexity: O(n)
 */
int appearOnce(int a[], int n) {
    int hash[100] = {0};
    for (int i = 0; i < n; i++) {
        hash[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (hash[a[i]] == 1) {
            return a[i];
        }
    }
}

/**
 * Optimal Approach:
 * 1. Use XOR operation to find the element that appears once.
 * 2. XOR of all elements will cancel out the elements that appear twice.
 * 3. Return the element that appears once.
 *
 * Time complexity: O(n)
 * Space complexity: O(1)
 */
int appearOnce(int a[], int n) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        res ^= a[i];
    }
    return res;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    scanArray(a, n);
    int result = appearOnce(a, n);
    printf("The element that appears once in the array is: %d\n", result);
    return 0;
}