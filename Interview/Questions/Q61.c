// 61.WAP to find out Longest palindrome in an array
#include <stdio.h>

#include "./compare.c"

int isPalindrome(int n) {
    int rev = 0, original = n;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == original;
}

int largestPalindrome(int a[], int n) {
    qsort(a, n, sizeof(int), compare);  // Sort the array in descending order
    for (int i = 0; i < n; i++) {
        if (isPalindrome(a[i]))
            return a[i];
    }
    return -1;
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
    int result = largestPalindrome(arr, n);
    if (result == -1) {
        printf("No palindrome found in the array.\n");
    } else {
        printf("The largest palindrome in the array is: %d\n", result);
    }
    return 0;
}