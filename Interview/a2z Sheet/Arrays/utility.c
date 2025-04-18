#include <stdio.h>

// Utility function to swap two integers
void swap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// Utility function to swap two integers using a temporary variable
void swapUsingTemp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Utility function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Utility function to scan an array
void scanArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}