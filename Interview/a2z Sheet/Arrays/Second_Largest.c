#include <limits.h>

#include "./utility.c"

int secondLargest(int* a, int n) {
    int smax = INT_MIN, max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            smax = max;
            max = a[i];
        } else if (a[i] > smax && a[i] != max) {
            smax = a[i];
        }
    }
    return smax;
}

int main() {
    int i, n;
    printf("\nEnter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Elements : ");
    scanArray(a, n);
    printf("\nSecond Largest Element In Array : %d ", secondLargest(a, n));
    return 0;
}