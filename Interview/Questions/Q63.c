// 63.WAP to print and count Non-repeating elements of an array
#include <stdio.h>

#include "./compare.c"

void countNonRepeating(int arr[], int n) {
    qsort(arr, n, sizeof(int), compareASC);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] != arr[i - 1]) && (i == n - 1 || arr[i] != arr[i + 1])) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\nThe number of non-repeating elements in the array is: %d\n", count);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    countNonRepeating(arr, n);
    return 0;
}
