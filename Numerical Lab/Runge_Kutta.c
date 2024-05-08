#include <stdio.h>
#include <math.h>
float f(float x, float y)
{
    float a = x + y;
    return a;
}
int main()
{
    float x0, y0, xn, y1, h, k1, k2, k3, k4, k;
    printf("\nEnter starting value of x & y : ");
    scanf("%f%f", &x0, &y0);
    printf("\nEnter the value of x at which y is required : ");
    scanf("%f", &xn);
    printf("\nEnter the step size : ");
    scanf("%f", &h);
    do
    {
        k1 = h * f(x0, y0);
        k2 = h * f(x0 + h / 2, y0 + k1 / 2);
        k3 = h * f(x0 + h / 2, y0 + k2 / 2);
        k4 = h * f(x0 + h, y0 + k3);
        k = (k1 + 2 * k2 + 2 * k3 + k4) / 6.0;
        y1 = y0 + k;
        printf("\n The value of y = %.5f at x = %.5f", y0, x0);
        y0 = y1;
        x0 = x0 + h;
    } while (x0 <= xn);
    return 0;
}