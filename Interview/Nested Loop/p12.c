/*
    Enter The Number Of Rows : 4
    1     1
    12   21
    123 321
    12344321
*/
#include <stdio.h>
void printPattern(int n)
{
    int sp = 2*n - 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        for (int j = 1; j <= sp; j++)
            printf(" ");
        for (int j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        sp -= 2;
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