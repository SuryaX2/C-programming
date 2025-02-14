// 28.WAP to identify Abundant number or not
#include <stdio.h>
int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}
int isAbundant(int n) {
    return sumOfDivisors(n) > n;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isAbundant(n)) {
        printf("%d is an Abundant number.\n", n);
    } else {
        printf("%d is not an Abundant number.\n", n);
    }
    return 0;
}