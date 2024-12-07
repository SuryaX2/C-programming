/*
    Enter The Number Of Rows : 4
    A 
    A B 
    A B C 
    A B C D
*/
#include <stdio.h>
void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
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