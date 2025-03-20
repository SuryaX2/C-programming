#include "./utility.c"

void removeDuplicate(int* a, int* n) {
    int hash[100] = {0};
    int j = 0;
    for (int i = 0; i < *n; i++) {
        hash[a[i]]++;
    }
    for (int i = 0; i < *n; i++) {
        if (hash[a[i]] == 1) {
            a[j++] = a[i];
        }
    }
    *n = j;
}

int main() {
    int n;
    printf("\nEnter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Elements : ");
    scanArray(a, n);
    removeDuplicate(a, &n);
    printArray(a, n);
    return 0;
}