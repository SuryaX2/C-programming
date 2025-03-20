#include "./utility.c"

int isSorted(int* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int i, n;
    printf("\nEnter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Elements : ");
    scanArray(a, n);
    if (isSorted(a, n)) {
        printf("\nArray is Sorted\n");
    } else {
        printf("\nArray is not Sorted\n");
    }
    return 0;
}