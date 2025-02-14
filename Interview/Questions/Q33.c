// 33.“Can a number be expressed as a sum of two prime numbers”—WAP to exaplain?
#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int start, end, n;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);
    printf("Numbers that can be expressed as a sum of two prime numbers:\n");
    scanf("%d", &n);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            for (int j = i + 1; j <= end; j++) {
                if (isPrime(j) && i + j == n) {
                    printf("%d + %d = %d\n", i, j, n);
                }
            }
        }
    }
    return 0;
}