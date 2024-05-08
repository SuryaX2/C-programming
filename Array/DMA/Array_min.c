#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, s;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    if (a == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nMinimum Element is %d",min(a,n));
    free(a);
    return 0;
}
int min(int *a, int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}
