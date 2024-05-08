#include <stdio.h>
int binary_search(int arr[], int size)
{
    int key;
    printf("\nEnter element you want to find:");
    scanf("%d", &key);
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int n;
    printf("\nEnter number of elements:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int val = binary_search(arr, n);
    if (val == -1)
        printf("Element not found!");
    else
        printf("Element found at block %d", val + 1);
    return 0;
}