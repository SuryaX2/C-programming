// 13.WAP to find out Sum of digits of a number
#include <stdio.h>
int sumOfDigits(int n) {
    int s = 0;
    for (; n != 0; n /= 10) s += n % 10;
    return s;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d is %d\n", n, sumOfDigits(n));
    return 0;
}