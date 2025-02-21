// 70.WAP to find out Frequency of each element of an array
#include <stdio.h>

#include "./ScanPrint.c"

void findFrequency(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        if (arr[i] != -1) {
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    scanArray(arr, n);
    findFrequency(arr, n);
    return 0;
}