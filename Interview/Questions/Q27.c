// 27.WAP to identify Harshad number or not
#include <math.h>
#include <stdio.h>
int isHarshad(int n) {
    int sum = 0;
    for (int x = n; x != 0; x /= 10) {
        sum += x % 10;
    }
    return n % sum == 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isHarshad(n)) {
        printf("%d is a Harshad number.\n", n);
    } else {
        printf("%d is not a Harshad number.\n", n);
    }
    return 0;
}