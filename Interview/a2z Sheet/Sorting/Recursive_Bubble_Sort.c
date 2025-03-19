#include "./utility.c"

/**
 * Recursive Bubble Sort (Optimized)
 * Algorithm:
    Compare each element with the next element and swap if the current element is greater than the next element
    Repeat the process for the remaining elements
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 * Best Case : O(n)
 * Average Case, Worst Case : O(n^2)
*/

void recursiveBubbleSort(int* a, int n) {
    if (n == 1) return;
    int isSwapped = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            swap(&a[i], &a[i + 1]);
            isSwapped = 1;
        }
    }
    if (!isSwapped) return;
    recursiveBubbleSort(a, n - 1);
}

int main() {
    int n;
    printf("\nEnter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Elements : ");
    scanArray(a, n);
    recursiveBubbleSort(a, n);
    printf("\nSorted Array : ");
    printArray(a, n);
    return 0;
}