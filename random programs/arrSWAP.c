#include <stdio.h>
void swap(int *arr, int size);
int main()
{
    int arr[] = {65, 43, 78, 85, 23, 8, 33, 49, 5, 15};
    int size = sizeof(arr) / sizeof(arr[0]); // ata kota element ache seta count er jnno
    printf("Original array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    swap(arr, size);
    printf("After swapping: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
void swap(int *arr, int size)
{
    int *max = arr;
    int *min = arr;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max)
            max = &arr[i];
        if (arr[i] < *min)
            min = &arr[i];
    }
    int temp;
    temp = *max;
    *max = *min;
    *min = temp;
}
