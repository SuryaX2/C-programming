#include "./utility.c"

/**
 * Quick Sort
 * Algorithm:
    Partition the array into two parts and sort them recursively
 * Time Complexity: O(nlogn)
 * Space Complexity: O(logn)
 * Best Case, Average Case : O(nlogn)
 * Worst Case : O(n^2)
*/

int partition(int* a, int low, int high) {
    int pivot = a[low], i = low + 1, j = high;
    do {
        while (a[i] <= pivot) i++;
        while (a[j] > pivot) j--;
        if (i < j) swapUsingTemp(&a[i], &a[j]);
    } while (i < j);
    swapUsingTemp(&a[low], &a[j]);
    return j;
}

void quickSort(int* a, int low, int high) {
    if (low < high) {
        int pivot = partition(a, low, high);
        quickSort(a, low, pivot - 1);
        quickSort(a, pivot + 1, high);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    scanArray(a, n);
    quickSort(a, 0, n - 1);
    printf("Sorted array: ");
    printArray(a, n);
    printf("\n");
    return 0;
}