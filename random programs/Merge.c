#include <stdio.h>
void printArray(int *a, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
void Merge(int *a, int low, int mid, int high) {
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            i++;
            k++;
        } else {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= high) {
        b[k] = a[j];
        j++;
        k++;
    }
    for (i = low; i <= high; i++)
        a[i] = b[i];
}
void mergeSort(int *a, int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        Merge(a, low, mid, high);
    }
}
int main() {
    int i, n;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Value : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nArrayList : ");
    printArray(a, n);
    mergeSort(a, 0, n - 1);
    printf("\nSorted ArrayList : ");
    printArray(a, n);
    return 0;
}