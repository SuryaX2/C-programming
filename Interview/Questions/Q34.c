// 34.WAP to Replace all 0’s with 1 in a given integer
#include <stdio.h>
void replace(int* a, int n) {
    for(int i = 0; i < n; i++)
        a[i] = a[i] == 0 ? 1 : a[i];
}
int main() {
    int n;
    printf("Enter Range : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter Value : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    replace(a, n);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}