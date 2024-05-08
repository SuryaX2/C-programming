#include <stdio.h>
int main()
{
    int i, n, s = 0, c = 0;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Value : ");
        scanf("%d", &a[i]);
    }
    printf("\nArrayList : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nArrayList EVEN : ");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
            s = s + a[i];
            c++;
        }
    }
    if (c == 0)
        printf("No element is EVEN element");
    else
    {
        for (i = 0; i < n; i++)
        {
            if (a[i]%2==0)
            {
                printf("\nValue : %d at Index : %d",a[i],i);
            }
            
        }
        printf("\nSum of the EVEN ArrayList : %d", s);
    }
    return 0;
}