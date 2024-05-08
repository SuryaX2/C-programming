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
        s = s + a[i];
    }
    printf("\nArrayList : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nSum of The Array is : %d", s);
    printf("\nArrayList Above Average : ");
    for (i = 0; i < n; i++)
    {
        if (a[i] > (s / 2))
        {
            printf("%d ", a[i]);
            c++;
        }
    }
    if (c == 0)
        printf("No element is Above Average");
    return 0;
}