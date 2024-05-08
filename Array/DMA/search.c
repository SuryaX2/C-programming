#include <stdio.h>
#include <stdlib.h>
int search(int *a, int n, int s)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == s)
            return i;
    }
    return -1;
}
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
    printf("Enter the element to search: ");
    scanf("%d", &s);
    if (search(a, n, s) != -1)
        printf("Element found at index: %d\n", search(a, n, s));
    else
        printf("Element not found.\n");
    free(a);
    return 0;
}
