// 62.WAP to Count distinct elements of an array
#include <stdio.h>

#include "./ScanPrint.c"
#include "./compare.c"

int countDistinct(int arr[], int n) {
    qsort(arr, n, sizeof(int), compareASC);
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
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
    int count = countDistinct(arr, n);
    printf("The number of distinct elements in the array is: %d\n", count);
    return 0;
}