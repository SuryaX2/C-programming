#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\nNumber of Rows : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (j = 1; j <= i - 1; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}