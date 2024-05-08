#include <stdio.h>
int main()
{
    int i, j, c = 0;
    char a[100], b[100];
    printf("\nEnter String A :");
    gets(a);
    printf("\nEnter String B :");
    gets(b);
    for (i = 0; a[i] != '\0'; i++)
        c++;
    for (j = 0; b[j] != '\0'; j++)
    {
        a[i] = b[j];
        i++;
    }
    a[i] = '\0';
    printf("\nCONCATINATED String : ");
    puts(a);
    return 0;
}