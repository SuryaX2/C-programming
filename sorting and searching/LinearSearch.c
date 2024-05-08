#include <stdio.h>
int main()
{
    int a[50], i, f = 0, n, num;
    printf("Enter Range : ");
    scanf("%d", &n);
    printf("Enter Value : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Which Element Want to Search : ");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
            f++;
    }
    if (f == 0)
        printf("%d NOT FOUND !!", num);
    else
        printf("%d FOUND !! %d Times(s)", num, f);
    return 0;
}
