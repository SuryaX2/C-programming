#include "./utility.c"

int largest(int* a, int n) {
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    int i, n;
    printf("\nEnter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Elements : ");
    scanArray(a, n);
    printf("\nLargest Element In Array : %d ", largest(a, n));
    return 0;
}