// 14.WAP to find out Sum of N natural numbers
#include <stdio.h>
int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is %d\n", n, sumOfNaturalNumbers(n));
    return 0;
}