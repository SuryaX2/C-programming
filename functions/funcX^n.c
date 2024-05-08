#include <stdio.h>
void power()
{
    int x, i, n, a=1;
    printf("\nEnter Your Number : ");
    scanf("%d", &x);
    printf("\nEnter Power : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        a = a * x;
    printf("%d^%d = %d", x, n, a);
}
int main()
{
    power();
    return 0;
}