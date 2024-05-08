#include <stdio.h>
#include <math.h>
float f(float x, float y)
{
    float a = (y - x) / (y + x);
    return a;
}
int main()
{
    float x0, y0, xn, y1, h;
    printf("\nEnter starting value of x & y : ");
    scanf("%f%f", &x0, &y0);
    printf("\nEnter the value of x at which y is required : ");
    scanf("%f", &xn);
    printf("\n Enter the step size : ");
    scanf("%f", &h);
    // printf("\nThe value of y = %.4f at x = %.4f", y0, x0);
    do
    {
        printf("\nThe value of y = %.4f at x = %.4f", y0, x0);
        y1 = y0 + h * f(x0, y0);
        x0 = x0 + h;
        y0 = y1;
    } while (x0 <= xn);
    return 0;
}