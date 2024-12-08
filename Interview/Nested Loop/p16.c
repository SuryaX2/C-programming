/*
    Enter The Number Of Rows : 4
    A 
    B B 
    C C C 
    D D D D 
*/
#include <stdio.h>
void printPattern(int n)
{
    for (char i = 'A'; i < 'A' + n; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            printf("%c ", i);
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