#include <stdio.h>
int i, n = 10, a[10];
int main()
{
    printf("\nEnter 10 values : \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 2; i < n; i++)
        a[i] = a[i + 1];
    n--;
    for (i = 4; i < n; i++)
        a[i] = a[i + 1];
    n--;
    printf("\nArrayList : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n5th Element is : %d", a[4]);
    return 0;
}