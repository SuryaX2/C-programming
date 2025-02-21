// 64.WAP to print and count Repeating elements in an array
#include <stdio.h>

#include "./ScanPrint.c"
#include "./compare.c"

void countRepeating(int arr[], int n) {
    qsort(arr, n, sizeof(int), compareASC);
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            printf("%d ", arr[i]);
            count++;
            while (i < n - 1 && arr[i] == arr[i + 1]) {
                i++;
            }
        }
    }
    printf("\nThe number of repeating elements in the array is: %d\n", count);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    scanArray(arr, n);
    countRepeating(arr, n);
    return 0;
}