#include "./utility.c"

void leftRotate(int* a, int n) {
    int temp = a[0];
    for (int i = 0; i < n; i++) {
        a[i] = a[i + 1];
    }
    a[n - 1] = temp;
}

int main() {
    int n;
    printf("\nEnter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Elements : ");
    scanArray(a, n);
    leftRotate(a, n);
    printArray(a, n);
    return 0;
}