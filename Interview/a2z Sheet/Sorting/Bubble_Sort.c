#include "./utility.c"

/**
 * Bubble Sort
 * Algorithm:
    Compare each element with the next element and swap if the current element is greater than the next element
    Repeat the process for the remaining elements
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 * Best Case : O(n)
 * Average Case, Worst Case : O(n^2)
*/

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

// Optimized Bubble Sort
void optimizedBubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int isSwapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
                isSwapped = 1;
            }
        }
        if (!isSwapped) break;
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    scanArray(a, n);
    bubbleSort(a, n); // Bubble Sort using normal way
    optimizedBubbleSort(a, n); // Bubble Sort using optimized way
    printf("Sorted array: ");
    printArray(a, n);
    return 0;
}