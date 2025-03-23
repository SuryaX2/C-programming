#include "./utility.c"

int linearSearch(int* a, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    scanArray(a, n);
    int key;
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    char* found = linearSearch(a, n, key) ? "" : "not ";
    printf("%d is %sfound in the array.\n", key, found);
    return 0;
}