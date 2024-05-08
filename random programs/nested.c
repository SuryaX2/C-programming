#include <stdio.h>
int main()
{
    int i, j, n;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            Sleep(100);
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}