// 57.WAP to find out Sum of positive square elements in an array
#include <stdio.h>

#include "./ScanPrint.c"

int sumOfPositiveSquare(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            sum += arr[i] * arr[i];
        }
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    scanArray(arr, n);
    int sum = sumOfPositiveSquare(arr, n);
    printf("The sum of positive square elements in the array is %d\n", sum);
    return 0;
}