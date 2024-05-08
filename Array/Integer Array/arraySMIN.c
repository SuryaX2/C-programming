#include <stdio.h>
int main()
{
    int i, n, min, smin, j, k;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Value : ");
        scanf("%d", &a[i]);
    }
    printf("\nArrayList : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    min = a[0];
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            j = i;
        }
    }
    if (j == 0)
    {
        smin = a[1];
        k = 1;
    }
    else
    {
        smin = a[0];
        k = 0;
    }
    for (i = 0; i < n; i++)
    {
        if (i != j)
        {
            if (a[i] < smin)
            {
                smin = a[i];
                k = i;
            }
        }
    }
    printf("\nMIN Number in the ArrayList : %d\tIndex : %d\tPosition : %d", min, j, j + 1);
    printf("\nSECOND MIN Number in the ArrayList : %d\tIndex : %d\tPosition : %d", smin, k, k + 1);
    return 0;
}