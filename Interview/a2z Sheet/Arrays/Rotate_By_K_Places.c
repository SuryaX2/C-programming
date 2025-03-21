#include "./utility.c"

void rotateByKPlaces(int* a, int n, int k) {
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = a[i];
    }
    for (int i = k; i < n; i++) {
        a[i - k] = a[i];
    }
    for (int i = 0; i < k; i++) {
        a[n - k + i] = temp[i];
    }
}

int main() {
    int n, k;
    printf("\nEnter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Elements : ");
    scanArray(a, n);
    printf("\nEnter K : ");
    scanf("%d", &k);
    rotateByKPlaces(a, n, k);
    printArray(a, n);
    return 0;
}