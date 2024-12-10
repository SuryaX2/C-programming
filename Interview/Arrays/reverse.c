// Array reverse element
#include <stdio.h>
void swap(int* a,int* b){
    a = *a ^ *b;
    b = *a ^ *b;
    a = *a ^ *b;
}
int main()
{
    int i, j, n;
    printf("\nEnter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    i = 0, j = n - 1;
    while (i < j)
    {
    }
    return 0;
}