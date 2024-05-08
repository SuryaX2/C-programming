#include <stdio.h>
#include <stdlib.h>
void sort(int *a, int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}
void merge(int *a, int n, int *b, int m)
{
    int k = m + n, i, j;
    int *c = (int *)malloc((k) * sizeof(int));
    for (i = 0; i != n; i++)
        c[i] = a[i];
    for (j = 0; j != m; i++, j++)
        c[i] = b[j];
    sort(c, k);
    printf("\nAfter sorting the merged array is:");
    for (int i = 0; i < k; i++)
        printf("%d ", c[i]);
}
int main()
{
    int n, m;
    printf("\nEnter no of elements of first unsorted array:");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    printf("\nEnter elements:");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter no of elements of Second unsorted array:");
    scanf("%d", &m);
    int *b = (int *)malloc(m * sizeof(int));
    printf("\nEnter elements:");
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    merge(a, n, b, m);
    return 0;
}