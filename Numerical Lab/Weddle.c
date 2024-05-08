#include <stdio.h>
#include <math.h>
float f(float x)
{
    float a = 1 / pow((1 - pow(x, 2)), 0.5);
    return a;
}
int main()
{
    float x0, xn, h, s = 0.0;
    int N;
    printf("\nEnter lower & upper limit of x : ");
    scanf("%f%f", &x0, &xn);
    printf("\nEnter number of intervals(N) : ");
    scanf("%d", &N);
    h = ((xn - x0) / N);
    do
    {
        s = s + (3 * h / 10) * (f(x0) + 5 * f(x0 + h) + f(x0 + 2 * h) + 6 * f(x0 + 3 * h) + f(x0 + 4 * h) + 5 * f(x0 + 5 * h) + f(x0 + 6 * h));
        x0 = x0 + (6 * h);
    } while (x0 < xn);
    printf("Area = %.3f", s);
    return 0;
}