#include <stdio.h>
int main()
{
    int n, i, a = 0, b = 1, c = 0, s = 0;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    printf("\nFibonacci Series : %d %d", a, b);
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        s = s + c;
        printf(" %d", c);
        a = b;
        b = c;
    }
    printf("\nSum = %d", s);
    return 0;
}