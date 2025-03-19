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