/*
    Enter The Number Of Rows : 4
    D 
    C D 
    B C D 
    A B C D 
*/
#include <stdio.h>
void printPattern(int n)
{
    for (char i = 'A' + n - 1; i >= 'A'; i--)
    {
        for (char j = i; j <= 'A' + n - 1; j++)
        {
            printf("%c ", j);
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