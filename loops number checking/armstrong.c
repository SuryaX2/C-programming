#include <stdio.h>

int power(int a, int b) {
    int p = 1, i;
    for (i = 1; i <= b; ++i) {
        p = p * a;
    }
    return p;
}
int main()
{
    int n, c, rem, p, s = 0, x;
    printf("Enter Number : ");
    scanf("%d", & n);
    for (x = n; n > 0; n = n / 10)
        c++;
    for (n = x; n > 0; n = n / 10)
    {
        rem = n % 10;
        p = power(rem, c);
        s = s + p;
    }
    if (s == x)
        printf("%d is ARMSTRONG no.", x);
    else
        printf("%d is not ARMSTRONG no.", x);
    return 0;
}