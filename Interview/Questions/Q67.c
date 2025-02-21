// 67.WAP to find out Maximum scalar product of two vectors
#include <stdio.h>
#include <stdlib.h>

#include "./ScanPrint.c"
#include "./compare.c"

int maxScalarProduct(int a[], int b[], int n) {
    int product = 0;
    qsort(a, n, sizeof(int), compareASC);
    qsort(b, n, sizeof(int), compareASC);
    for (int i = 0; i < n; i++) {
        product += a[i] * b[i];
    }
    return product;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter the elements of the first vector: ");
    scanArray(a, n);
    printf("Enter the elements of the second vector: ");
    scanArray(b, n);
    int maxProduct = maxScalarProduct(a, b, n);
    printf("The maximum scalar product of the two vectors is: %d\n", maxProduct);
    return 0;
}