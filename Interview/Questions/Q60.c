// 60.	WAP to Reversing an array
#include <stdio.h>

#include "./ScanPrint.c"

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverseArray(int* a, int n) {
    int l = 0, r = n - 1;
    while (l < r) {
        swap(&a[l], &a[r]);
        l++, r--;
    }
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    scanArray(arr, n);
    reverseArray(arr, n);
    printf("The reversed array is: ");
    printArray(arr, n);
    return 0;
}