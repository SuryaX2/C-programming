#include "./utility.c"

void moveZeroes(int* a, int n){
    for (int i = 0, j = 0; i < n;i++){
        if(a[i]!=0){
            swap(&a[i], &a[j]);
            j++;
        }
    }
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array: ");
    scanArray(a, n);
    moveZeroes(a, n);
    printArray(a, n);
    return 0;
}