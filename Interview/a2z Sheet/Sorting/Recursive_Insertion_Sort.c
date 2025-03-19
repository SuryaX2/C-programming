#include "./utility.c"

/**
 * Recursive Insertion Sort
 * Algorithm:
    Insert the element at its correct position in the sorted part of the array
    Repeat the process for the remaining elements
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 * Best Case, Average Case, Worst Case: O(n^2)
*/

void recursiveInsertionSort(int* a, int i,int n) {
    if (i == n) return;
    int j = i;
    while (j > 0 && a[j - 1] > a[j]) {
        swap(&a[j - 1], &a[j]); 
        j--; 
    }
    recursiveInsertionSort(a, i + 1, n);
}

int main(){
    int n;
    printf("\nEnter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Elements : ");
    scanArray(a, n);
    recursiveInsertionSort(a, 1, n);
    printf("\nSorted Array : ");
    printArray(a, n);
    return 0;
}