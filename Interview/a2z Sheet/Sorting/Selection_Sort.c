#include "./utility.c"

/**
 * Selection Sort
 * Algorithm:
    Select the minimum element and swap it with the first element
    Repeat the process for the remaining elements
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 * Best Case, Average Case, Worst Case: O(n^2)
 */

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        swap(&a[i], &a[min]);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    scanArray(a, n);
    selectionSort(a, n);
    printf("Sorted array: ");
    printArray(a, n);
    return 0;
}