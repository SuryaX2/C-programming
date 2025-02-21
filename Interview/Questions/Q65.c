// 65.WAP to Remove duplicate elements in an array
#include <stdio.h>

#include "./ScanPrint.c"
#include "./compare.c"

int removeDuplicate(int arr[], int n) {
    qsort(arr, n, sizeof(int), compareASC);
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[count] = arr[i];
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    scanArray(arr, n);
    int newSize = removeDuplicate(arr, n);
    printf("Array after removing duplicates: ");
    printArray(arr, newSize);
    return 0;
}