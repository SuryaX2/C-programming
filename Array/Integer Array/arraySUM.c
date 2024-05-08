#include <stdio.h>
int main()
{
    int i, n, s = 0;
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
    return 0;
}