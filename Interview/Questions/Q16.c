// 16.WAP to find out Reverse of a given number
#include <stdio.h>
int reverseInt(int n) {
    int rev = 0;
    for (; n != 0; n /= 10)
        rev = rev * 10 + n % 10;
    return rev;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse of %d is %d\n", n, reverseInt(n));
    return 0;
}