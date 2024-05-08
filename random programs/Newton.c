#include <stdio.h>
#include <math.h>
float f(float x)
{
    float a = pow(x, 3) - x - 4;
    return a;
}
float df(float x)
{
    float b = 3 * pow(x, 2) - 1;
    return b;
}
int main()
{
    float a, b, e, x0, x1, acc;
    int k = 0;
    printf("\nEnter Accuracy : ");
    scanf("%f", &e);
    do
    {
        printf("\nEnter Interval a,b : ");
        scanf("%f%f", &a, &b);
    } while (f(a) * f(b) > 0);
    x0 = (a + b) / 2;
    do
    {
        x1 = x0 - (f(x0) / df(x0));
        printf("\nI=%d x0=%f f(x0)=%f df(X0)=%f x1=%f |x1-x0|=%f", k + 1, x0, f(x0), df(x0), x1, fabs(x1 - x0));
        acc = fabs(x1 - x0);
        x0 = x1;
        k++;
    } while (acc > e);
    printf("\nRoot of the equation : %f", x1);
    return 0;
}