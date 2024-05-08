// Vowel Consonant Sp.Charcter , Blank Space
#include <stdio.h>
int main()
{
    char a[50];
    int i, v = 0, c = 0, sc = 0, bs = 0;
    printf("\nEnter String : ");
    gets(a);
    printf("\nYour String : ");
    for (i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
        if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U')
            v++;
        else if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
            c++;
        else if (a[i] == ' ')
            bs++;
        else
            sc++;
    }
    printf("\nYour String Has %d Vowels", v);
    printf("\nYour String Has %d Consonant", c);
    printf("\nYour String Has %d Blank space", bs);
    printf("\nYour String Has %d Special Character", sc);
    return 0;
}