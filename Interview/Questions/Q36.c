// 36.WAP Decimal to binary conversion
#include <math.h>
#include <stdio.h>
void decimalToBinary(int n) {
    int binary = 0;
    for (int i = 0, x = n; x != 0; i++, x = x / 2) {
        int rem = n % 2;
        binary += rem * pow(10, i);
    }
    printf("Binary equivalent of %d is %d", n, binary);
}
int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
}