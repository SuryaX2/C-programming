#include <limits.h>
int secondLargest(int arr[], int n)
{
    if (n < 2)
        return -1;
    int max = INT_MIN, smax = INT_MIN, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }
    return smax;
}
int main()
{
    int i, j, n;
    printf("\nEnter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);    
    printf("\nSecond Max Element In Array : %d ", secondLargest(a,n));
    return 0;
}