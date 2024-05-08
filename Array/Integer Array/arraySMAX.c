#include <stdio.h>
int main()
{
    int i, n, max, smax, j, k;
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
    max = a[0];
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            j = i;
        }
    }
    if (j == 0)
    {
        smax = a[1];
        k = 1;
    }
    else
    {
        smax = a[0];
        k = 0;
    }
    for (i = 0; i < n; i++)
    {
        if (i != j)
        {
            if (a[i] > smax)
            {
                smax = a[i];
                k = i;
            }
        }
    }
    printf("\nMAX Number in the ArrayList : %d\tIndex : %d\tPosition : %d", max,j,j+1);
    printf("\nSECOND MAX Number in the ArrayList : %d\tIndex : %d\tPosition : %d", smax,k,k+1);
    return 0;
}