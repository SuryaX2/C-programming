/*
    Enter The Number Of Rows : 4
    A B C D 
    A B C 
    A B 
    A 
*/
#include <stdio.h>
void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + (n - i - 1); j++)
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