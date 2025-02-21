// 68.WAP to find out Triplets with a given sum
#include <stdio.h>
#include <stdlib.h>

#include "./ScanPrint.c"
#include "./compare.c"

int hasTripletSum(int arr[], int n, int target) {
    qsort(arr, n, sizeof(int), compareASC);
    for (int i = 0; i < n - 2; i++) {
        int l = i + 1, r = n - 1;
        int requiredSum = target - arr[i];
        while (l < r) {
            if (arr[l] + arr[r] == requiredSum)
                return 1;
            if (arr[l] + arr[r] < requiredSum)
                l++;
            else if (arr[l] + arr[r] > requiredSum)
                r--;
        }
    }
    return 0;
}

int main() {
    int n, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    scanArray(arr, n);
    printf("Enter the target sum: ");
    scanf("%d", &target);
    if (hasTripletSum(arr, n, target))
        printf("Triplets with sum %d exist\n", target);
    else
        printf("Triplets with sum %d do not exist\n", target);
    return 0;
}