/*
    Enter The Number Of Rows : 4
    1 
    2 2 
    3 3 3 
    4 4 4 4 
*/
#include <stdio.h>
void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",i);
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