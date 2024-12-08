/*
    Enter The Number Of Rows : 4
    *      *
    **    **
    ***  ***
    ********
    ***  ***
    **    **
    *      *
*/
#include <stdio.h>
void printPattern(int n)
{
    int sp = (n - 1) * 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= sp; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        sp -= 2;
        printf("\n");
    }
    sp = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= sp; j++)
            printf(" ");
        for (int j = 1; j <= n - i; j++)
        {
            printf("*");
        }
        sp += 2;
        printf("\n");
    }
}
int main()
{
    int n;
    printf("\nEnter The Number Of Rows : ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}