#include <stdio.h>
int main()
{
    char a[50];
    int i;
    printf("\nEnter String : ");
    gets(a);
    printf("\nYour String : ");
    puts(a);
    // for (i = 0; a[i] != '\0'; i++)
    //     printf("%c", a[i]);
    printf("\nConverted Lower to Uppercase : ");
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
            a[i] = a[i] - 32;
    }
    puts(a);
    // for (i = 0; a[i] != '\0'; i++)
    //     printf("%c", a[i]);
    return 0;
}