#include <stdio.h>
int main()
{
    int i, n, min;
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
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    printf("\nMIN Number in the ArrayList : %d", min);
    return 0;
}