#include <stdio.h>
int main()
{
    int a[50], i, n, k = 1, j, temp;
    printf("Enter Range : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Value : "); // input
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        printf("\nIteration %d : ", k++);
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    return 0;
}
