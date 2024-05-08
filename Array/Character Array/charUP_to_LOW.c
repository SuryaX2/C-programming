#include <stdio.h>
int main()
{
    char a[50];
    int i;
    printf("\nEnter String : ");
    gets(a);
    printf("\nYour String : ");
    for (i = 0; a[i] != '\0'; i++)
        printf("%c", a[i]);
    printf("\nConverted Upper to Lowercase : ");
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
            a[i] = a[i] + 32;
    }
    for (i = 0; a[i] != '\0'; i++)
        printf("%c", a[i]);
    return 0;
}