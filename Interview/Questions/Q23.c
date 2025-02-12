// 23.WAP to identify an user given number is Strong number or not
#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = n; i >= 1; i--)
        fact *= i;
    return fact;
}
int isStrong(int n) {
    int s = 0, c = 0;
    for (int x = n; x != 0; x /= 10)
        s += factorial(x % 10);
    return s == n;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isStrong(n)) {
        printf("%d is a strong number\n", n);
    } else {
        printf("%d is not a strong number\n", n);
    }
    return 0;
}
