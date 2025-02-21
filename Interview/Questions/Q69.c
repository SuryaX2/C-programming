// 69.WAP to find out Number of even and odd elements in an array
#include <stdio.h>

#include "./ScanPrint.c"

void evenOddCount(int arr[], int n) {
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d\n", odd);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    scanArray(arr, n);
    evenOddCount(arr, n);
    return 0;
}