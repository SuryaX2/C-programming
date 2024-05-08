#include <stdio.h>
#include <windows.h>
int main()
{
    int i, j, n, sp, a, k = 2, l;
    printf("Enter Range = ");
    scanf("%d", &n);
    l = (2 * n) - 2;
    for (a = 1; a <= (2 * n); a++)
    {
        Sleep(10);
        printf("*");
    }
    printf("\n");
    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= ((n + 1) - i); j++)
        {
            Sleep(10);
            printf("*");
        }
        for (sp = 1; sp <= k; sp++)
        {
            Sleep(10);
            printf(" ");
        }
        k += 2;
        for (j = ((n + 1) - i); j >= 1; j--)
        {
            Sleep(10);
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            Sleep(10);
            printf("*");
        }
        for (sp = l; sp >= i; sp--)
        {
            Sleep(10);
            printf(" ");
        }
        l -= 1;
        for (j = 1; j <= i; j++)
        {
            Sleep(10);
            printf("*");
        }
        printf("\n");
    }
    for (a = 1; a <= (2 * n); a++)
    {
        Sleep(10);
        printf("*");
    }
    return 0;
}
