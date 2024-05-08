#include <stdio.h>
int main()
{
    int i, n, max;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Value : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nArrayList : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    printf("\nMAX Number in the ArrayList : %d", max);
    return 0;
}