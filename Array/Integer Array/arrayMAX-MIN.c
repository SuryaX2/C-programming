#include <stdio.h>
void maxmin(int *a, int n)
{
    int max = a[0], min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("\nMAX Number in the ArrayList : %d", max);
    printf("\nMIN Number in the ArrayList : %d", min);
}
int main()
{
    int i, n, max;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Value : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    maxmin(a, n);
    return 0;
}