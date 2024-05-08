// C program to find GCD & LCM of two numbers
#include <stdio.h>
#include <conio.h>
int gcd(int, int);
int lcm(int, int);
int main()
{
    int a, b, c;
    printf("Enter 2 No.= ");
    scanf("%d%d", &a, &b);
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    printf("\nLCM of %d and %d is %d ", a, b, lcm(a, b));
    printf("\nEnter 3 No.= ");
    scanf("%d%d%d", &a, &b, &c);
    printf("GCD of %d , %d and %d is %d ", a, b, c, gcd(gcd(a, b), c));
    getch();
}
int x;
int gcd(int a, int b) 
{
    if (a == 0)
    {
        x = b;
        return b;
    }
    else
        return gcd(b % a, a);
}
int lcm(int a, int b)
{
    return (a * b) / x;
}