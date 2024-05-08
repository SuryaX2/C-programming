#include <stdio.h>
int main()
{
    char a[50], b[50];
    int i, j = 0, c = 0, flag = 0;
    printf("\nEnter String : ");
    gets(a);
    printf("\nYour String : ");
    for (i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
        c++;
    }
    printf("\nReversed String : ");
    for (i = c - 1; i >= 0; i--)
    {
        b[j] = a[i];
        printf("%c",b[j]);
        j++;
    }
    b[j] = '\0';
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != b[i])
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