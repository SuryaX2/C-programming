#include <stdio.h>
void Bubble(int *a, int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void Insertion(int *a, int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--)
            a[j + 1] = a[j];
        a[j + 1] = temp;
    }
}
void Selection(int *a, int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main() {
    int i, n;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter ArrayList : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // Bubble(a, n);
    Insertion(a, n);
    // Selection(a, n);
    printf("\nSorted ArrayList : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}