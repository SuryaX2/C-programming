// 66.WAP to find out Minimum scalar product of two vectors
#include <stdio.h>
#include <stdlib.h>

#include "./compare.c"

int minScalarProduct(int a[], int b[], int n) {
    int product = 0;
    qsort(a, n, sizeof(int), compareASC);
    qsort(b, n, sizeof(int), compareDESC);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            product += a[i] * b[j];
        }
    }
    return product;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter the elements of the first vector: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of the second vector: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    int minProduct = minScalarProduct(a, b, n);
    printf("The minimum scalar product of the two vectors is: %d\n", minProduct);
    return 0;
}