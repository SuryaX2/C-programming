// 40.WAP Octal to binary conversion
#include <math.h>
#include <stdio.h>
int octalToDecimal(int n) {
    int decimal = 0;
    for (int i = 0, x = n; x != 0; i++, x = x / 10) {
        int rem = x % 10;
        decimal += rem * pow(8, i);
    }
    return decimal;
}
int octalToBinary(int n) {
    int binary = 0;
    int decimal = octalToDecimal(n);
    for (int i = 0, x = decimal; x != 0; i++, x = x / 2) {
        int rem = x % 2;
        binary += rem * pow(10, i);
    }
    return binary;
}
int main() {
    int n;
    printf("Enter an octal number: ");
    scanf("%d", &n);
    int binary = octalToBinary(n);
    printf("Binary equivalent of %d is %d", n, binary);
    return 0;
}