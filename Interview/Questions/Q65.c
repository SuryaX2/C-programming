// 65.WAP to Remove duplicate elements in an array
#include <stdio.h>

#include "./compare.c"

int removeDuplicate(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);
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
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = removeDuplicate(arr, n);
    printf("The number of unique elements in the array is: %d\n", count);
    return 0;
}