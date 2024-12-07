/*
    Enter The Number Of Rows : 4
    1 
    2 3 
    4 5 6 
    7 8 9 10 
*/
#include <stdio.h>
void printPattern(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k++);
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