#include <stdio.h>
int main()
{
    int i, n;
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
    printf("\nReversed ArrayList : ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);
    return 0;
}