// 26.WAP to identify Automorphic number or not
#include <math.h>
#include <stdio.h>
int isAutomorphic(int n) {
    int c = 0;
    while (n > 0) {
        n /= 10;
        c++;
    }
    return n * n % (int)pow(10, c) == n;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isAutomorphic(n)) {
        printf("%d is an Automorphic number.\n", n);
    } else {
        printf("%d is not an Automorphic number.\n", n);
    }
    return 0;
}