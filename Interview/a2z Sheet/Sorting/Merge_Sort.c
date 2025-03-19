#include "./utility.c"

/**
 * Merge Sort
 * Algorithm:
    Divide the array into two halves and sort them recursively
    Merge the sorted halves
 * Time Complexity: O(nlogn)
 * Space Complexity: O(n)
 * Best Case, Average Case, Worst Case: O(nlogn)
*/

void merge(int* a, int low, int mid, int high) {
    int i = low, j = mid + 1, k = low, b[100];
    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            b[k++] = a[i++];
        } else {
            b[k++] = a[j++];
        }
    }
    while (i <= mid) {
        b[k++] = a[i++];
    }
    while (j <= high) {
        b[k++] = a[j++];
    }
    for (int i = low; i <= high; i++) {
        a[i] = b[i];
    }
}

void mergeSort(int* a, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    scanArray(a, n);
    mergeSort(a, 0, n - 1);
    printf("Sorted array: ");
    printArray(a, n);
    printf("\n");
    return 0;
}