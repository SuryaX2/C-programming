/*
    Enter The Number Of Rows : 4
    1 2 3 4 
    1 2 3 
    1 2 
    1 
*/
#include <stdio.h>
void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d ", j);
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