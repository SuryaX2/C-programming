#include <stdio.h>
int main()
{
    int n, m, i = 0, j = 0;
    printf("Enter range of the 1st array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter range of the 2nd array: ");
    scanf("%d", &m);
    int b[m];
    printf("Enter the elements of the 1st array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the elements of the 2nd array: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    int c[n + m];
    for (i = 0; i != n; i++)
        c[i] = a[i];
    for (j = 0; j != m; i++, j++)
        c[i] = b[j];
    printf("\nMerged ArrayList : ");
    for (i = 0; i < (m + n); i++)
        printf("%d ", c[i]);
    return 0;
}