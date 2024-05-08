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
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
            a[i] = a[i] - 32;
    }
    printf("\nYour Acronym : ");
    for (i = 0; a[i] != '\0'; i++)
    {
        if (i == 0)
            printf("%c", a[0]);
        else if (a[i] == ' ')
            printf(".%c", a[i + 1]);
    }
    return 0;
}