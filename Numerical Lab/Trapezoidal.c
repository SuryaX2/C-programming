#include <stdio.h>
#include <math.h>
float f(float x)
{
    float a = 4 * x - 3 * x * x;
    return a;
}
int main()
{
    float x0, xn, h, sum = 0;
    int N, Ns;
    printf("\n Enter lower & upper limit of x : ");
    scanf("%f%f", &x0, &xn);
    printf("\nEnter number of  intervals (N) : ");
    scanf("%d", &N);
    h = (xn - x0) / N;
    do
    {
        sum = sum + (h / 2) * (f(x0) + f(x0 + h));
        printf("\n%f\t\t%f", x0, f(x0));
        x0 = x0 + h;
    } while (x0 < xn);
    printf("\n%f\t\t%f", x0, f(x0));    
    printf("\nThe Integral Value is: %.3f", sum);
}