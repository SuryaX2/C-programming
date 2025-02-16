// 44.WAP to find out Number of integers which has exactly 9 divisors
#include <stdio.h>
int divisor(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count == 9;
}
int main() {
    int n, count = 0;
    printf("Enter a limit: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (divisor(i))
            count++;
    printf("There are %d numbers with exactly 9 divisors.\n", count);
    return 0;
}