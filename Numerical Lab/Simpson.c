#include <stdio.h>
#include <math.h>
float f(float x)
{
    float a = 4 * x - 3 * x * x;
    return a;
}
void main()
{
    float x0, xn, h, sum = 0;
    int N;
    printf("\nEnter lower & upper limit of x : ");
    scanf("%f%f", &x0, &xn);
    printf("\nEnter no.of intervals : ");
    scanf("%d", &N);
    h = ((xn - x0) / N);
    do
    {
        sum = sum + (h / 3) * (f(x0) + 4 * f(x0 + h) + f(x0 + 2 * h));
        printf("\n%f\t\t%f\t\t%f\t\t%f\t\t%f\t\t%f", x0, x0 + h, x0 + 2 * h, f(x0), f(x0 + h), f(x0 + 2 * h));
        x0 = x0 + 2 * h;
    } while (x0 < xn);
    printf("\nThe Integral Value is:%.4f", sum);
}