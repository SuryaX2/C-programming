/*
    Enter The Number Of Rows : 4
    * * * * 
    * * * * 
    * * * * 
    * * * * 
*/
#include <stdio.h>
void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
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