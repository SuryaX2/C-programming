//Array reverse element
#include <stdio.h>
int main()
{
    char a[50];
    int i, c = 0;
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
        printf("%c", a[i]);
    return 0;
}