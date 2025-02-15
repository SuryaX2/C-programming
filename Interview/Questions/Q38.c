// 38.WAP Octal to decimal conversion
#include <math.h>
#include <stdio.h>
void octalToDecimal(int n) {
    int decimal = 0;
    for (int i = 0, x = n; x != 0; i++, x = x / 10) {
        int rem = x % 10;
        decimal += rem * pow(8, i);
    }
    printf("Decimal equivalent of %d is %d", n, decimal);
}
int main() {
    int n;
    printf("Enter a octal number: ");
    scanf("%d", &n);
    octalToDecimal(n);
    return 0;
}