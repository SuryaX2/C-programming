// 17.WAP to find out Factorial of a number
#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = n; i >= 1; i--)
        fact *= i;
    return fact;
}
// recursive approach
// int factorial(int n) {
//     if (n == 0)
//         return 1;
//     return n * factorial(n - 1);
// }
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}