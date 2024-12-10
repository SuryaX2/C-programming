// Array reverse element
#include <stdio.h>
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int i, j, n;
    printf("\nEnter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0, j = n - 1; i < j; i++, j--)
        swap(&a[i], &a[j]);
    printf("\nReversed Array : ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}