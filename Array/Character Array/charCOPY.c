#include <stdio.h>
int main()
{
    char a[50], b[50];
    int i;
    printf("\nEnter String : ");
    gets(a);
    printf("\nYour String : ");
    for (i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
        b[i] = a[i];
    }
    b[i] = '\0';
    printf("\nCopied String : ");
    for (i = 0; b[i] != '\0'; i++)
        printf("%c", b[i]);
    return 0;
}