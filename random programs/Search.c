#include <stdio.h>
void Binary(int *a, int n, int key)
{
    int beg = 0, end = n - 1;
    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (a[mid] == key)
        {
            printf("%d Found !!", key);
            return;
        }
        else if (key > a[mid])
            beg = mid + 1;
        else
            end = mid - 1;
    }
    if (beg > end)
        printf("\nNot found");
}
int main()
{
    int i, n, key;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter ArrayList : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter Key to be Found : ");
    scanf("%d", &key);
    Binary(a, n, key);
    return 0;
}