#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter Range : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            Sleep(10);
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
