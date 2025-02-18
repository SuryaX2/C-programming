// 56.WAP to Check if two arrays are the same or not
#include <stdio.h>
int isSame(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    if (isSame(arr1, arr2, n)) {
        printf("The arrays are the same.\n");
    } else {
        printf("The arrays are not the same.\n");
    }
    return 0;
}