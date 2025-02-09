// 12.WAP to find out Number of digits in an integer
#include <stdio.h>
int numberOfDigits(int n) {
    int c = 0;
    for (; n != 0; n /= 10, c++);
    return c;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Number of digits in %d is %d\n", n, numberOfDigits(n));
    return 0;
}