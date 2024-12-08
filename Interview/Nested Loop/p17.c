/*
    Enter The Number Of Rows : 4
       *
      ***
     *****
    *******
*/
#include <stdio.h>
void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i - 1; j++)
            printf(" ");
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            printf("%c", j);
        }
        for (char j = 'A' + i - 1; j >= 'A'; j--)
        {
            printf("%c", j);
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