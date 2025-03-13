// Print N to 1 using recursion
#include<stdio.h>

void printNto1(int n) {
    if (n < 1) return;
    printf("%d ", n);
    printNto1(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printNto1(n);
    return 0;
}