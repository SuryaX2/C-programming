// 32.WAP to print Armstrong numbers between two intervals
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
    int start, end;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    return 0;
}