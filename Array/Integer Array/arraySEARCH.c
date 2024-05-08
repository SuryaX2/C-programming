#include <stdio.h>
int main()
{
    int i, n, num, c = 0;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Value : ");
        scanf("%d", &a[i]);
    }
    printf("\nEnter Number you wanna search : ");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (num == a[i])
        {
            c++;
        }
    }
    if (c == 0)
        printf("%d Not Found !!", num);
    else
        printf("%d Found %d Time(s)", num, c);
    return 0;
}