// 58.WAP to identify Second smallest element in an array
#include <limits.h>
#include <stdio.h>
int secondSmallest(int arr[], int n) {
    if (n < 2) {
        return -1;
    }
    int min = INT_MAX, sMin = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            sMin = min;
            min = arr[i];
        } else if (arr[i] < sMin && arr[i] != min) {
            sMin = arr[i];
        }
    }
    return sMin;
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
    int sMin = secondSmallest(arr, n);
    printf("The second smallest element in the array is %d\n", sMin);
    return 0;
}