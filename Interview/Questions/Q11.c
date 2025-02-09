// 11.WAP to find out Greatest of three numbers
#include <stdio.h>
int greatest(int a, int b, int c) {
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Greatest of %d, %d and %d is %d\n", a, b, c, greatest(a, b, c));
    return 0;
}