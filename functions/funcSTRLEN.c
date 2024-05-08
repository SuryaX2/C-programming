#include <stdio.h>
int strLength(char a[])
{
    int i, c = 0;
    for (i = 0; a[i] != '\0'; i++)
        c++;
    return c;
}
int main()
{
    char a[20];
    printf("\nEnter String : ");
    gets(a);
    printf("\nLenght of the string is : %d", strLength(a));
    return 0;
}