// 10.WAP to find out  Greatest of two numbers
#include <stdio.h>
int greatest(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Greatest of %d and %d is %d\n", a, b, greatest(a, b));
    return 0;
}