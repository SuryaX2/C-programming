// 60.	WAP to Reversing an array
#include <stdio.h>
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
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, n);
    printf("The reversed array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}