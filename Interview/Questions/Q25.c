// 25.WAP to identify Friendly pair or not (amicable or not)    
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
int isAmicable(int a, int b) {
    return sumOfDivisors(a) / a && sumOfDivisors(b) / b;
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (isAmicable(a, b)) {
        printf("%d and %d are Amicable\n", a, b);
    } else {
        printf("%d and %d are Not Amicable\n", a, b);
    }
    return 0;
}
