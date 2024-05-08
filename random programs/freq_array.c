#include <stdio.h>
void hz(int *a, int n)
{
    int i, j, count;
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        printf("\n%d Found %d times", a[i], count);
    }
}
int main()
{
    int i, n;
    printf("\nEnter Number : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    hz(a, n);
    return 0;
}