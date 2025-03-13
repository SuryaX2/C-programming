// Reverse an array using recursion
#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
// using normal way
// void reverse(int a[], int n) {
//     int i = 0, j = n - 1;
//     while (i < j) {
//         swap(&a[i], &a[j]);
//         i++, j--;
//     }
// }

// using recursion
void reverse(int a[], int l, int r) {
    if (l < r) {
        swap(&a[l], &a[r]);
        reverse(a, l + 1, r - 1);
    }
}
int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(a, 0, 9);
    for (int i = 0; i < 10; i++) printf("%d ", a[i]);
    return 0;
}