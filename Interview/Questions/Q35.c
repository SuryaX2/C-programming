// 35.WAP Binary to decimal conversion
#include <math.h>
#include <stdio.h>
void binaryToDecimal(int n) {
    int decimal = 0;
    for (int i = 0, x = n; x != 0; i++, x = x / 10) {
        int rem = x % 10;
        decimal += rem * pow(2, i);
    }
    printf("Decimal equivalent of %d is %d", n, decimal);
}
int main() {
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    binaryToDecimal(n);
    return 0;
}