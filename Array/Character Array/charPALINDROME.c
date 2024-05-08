#include <stdio.h>
int main()
{
    char a[50];
    int i, j, c = 0, flag = 0;
    printf("\nEnter String : ");
    gets(a);
    printf("\nYour String : ");
    for (i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
        c++;
    }
    for (i = 0, j = c - 1; i <= j; i++, j--)
    {
        if (a[i] != a[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("\nIts Palindrome");
    else
        printf("\nNot Palindrome");
    return 0;
}