// 8.WAP to find out LCM of two numbers
#include <stdio.h>
int LCM(int a, int b) {
    int max = a > b ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("LCM of %d and %d is %d\n", a, b, LCM(a, b));
    return 0;
}