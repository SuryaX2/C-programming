// 39.WAP Binary to octal conversion
#include <math.h>
#include <stdio.h>
int binaryToDecimal(int n) {
    int decimal = 0;
    for (int i = 0, x = n; x != 0; i++, x = x / 10) {
        int rem = x % 10;
        decimal += rem * pow(2, i);
    }
    return decimal;
}
int binaryToOctal(int n) {
    int octal = 0;
    int decimal = binaryToDecimal(n);
    for (int i = 0, x = decimal; x != 0; i++, x = x / 8) {
        int rem = x % 8;
        octal += rem * pow(10, i);
    }
    return octal;
}
int main() {
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    int octal = binaryToOctal(n);
    printf("Octal equivalent of %d is %d", n, octal);
    return 0;
}