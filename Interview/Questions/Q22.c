// 22.WAP to identify an user given number is Armstrong number or not
#include <stdio.h>
int power(int n, int p) {
    int res = 1;
    for (int i = 0; i < p; i++)
        res *= n;
    return res;
}
int isArmstrong(int n) {
    int s = 0, c = 0;
    for (int x = n; x != 0; x /= 10) c++;
    for (int x = n; x != 0; x /= 10)
        s += power(x % 10, c);
    return s == n;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isArmstrong(n)) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }
    return 0;
}