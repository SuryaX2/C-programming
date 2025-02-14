// 37.WAP Decimal to octal conversion
#include <math.h>
#include <stdio.h>
int decimalToOctal(int n) {
    int octal = 0;
    for (int i = 0, x = n; x != 0; i++, x = x / 8) {
        int rem = x % 8;
        octal += rem * pow(10, i);
    }
    printf("Octal equivalent of %d is %d", n, octal);
}
int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decimalToOctal(n);
    return 0;
}