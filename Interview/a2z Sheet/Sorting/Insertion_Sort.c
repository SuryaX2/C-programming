#include "./utility.c"

/**
 * Insertion Sort
 * Algorithm:
    Insert the element at its correct position in the sorted part of the array
    Repeat the process for the remaining elements
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 * Best Case, Average Case, Worst Case: O(n^2)
*/

void insertionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int j = i + 1;
        while (j > 0 && a[j - 1] > a[j]) {
            swap(&a[j], &a[j - 1]);
            j--;
        }
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    scanArray(a, n);
    insertionSort(a, n);
    printf("Sorted array: ");
    printArray(a, n);
    return 0;
}