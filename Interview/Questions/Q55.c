// 55.WAP to find out Sum of elements in an array
#include <stdio.h>

#include "./ScanPrint.c"

int sumOfElements(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
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
    int sum = sumOfElements(arr, n);
    printf("The sum of the elements in the array is %d\n", sum);
    return 0;
}