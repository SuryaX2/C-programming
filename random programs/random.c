#include <stdio.h>
#include <string.h>
int main()
{
    char a[2];
    for (int i = 0; a[i] != '\0'; i++)
        a[i] = 'k';
    puts(a);
    return 0;
}