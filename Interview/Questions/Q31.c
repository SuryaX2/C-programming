// 31.WAP to print Prime numbers in a given range
#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int start, end;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    return 0;
}