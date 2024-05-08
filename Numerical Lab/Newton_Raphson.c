#include <stdio.h>
#include <math.h>
float f(float x)
{
    float f1;
    return f1 = pow(x, 3) - 8 * x - 4;
}
float df(float x)
{
    float df1;
    return df1 = 3 * pow(x, 2) - 8;
}
int main()
{
    float a, b, x0, x1, acc, e;
    int k = 0;
    printf("\n Enter accuracy : ");
    scanf("%f", &e);
    do
    {
        printf("\n Enter interval a, b : ");
        scanf("%f %f", &a, &b);
    } while (f(a) * f(b) > 0);
    x0 = (a + b) / 2;
    do
    {
        x1 = x0 - (f(x0) / df(x0));
        printf("\nI = %d x0 = %f f(x0) = %f f'(x0) = %f x1 = %f | x1 - x0 |= %f", k + 1, x0, f(x0), df(x0), x1, fabs(x1 - x0));
        acc = fabs(x1 - x0);
        x0 = x1;
        k++;
    } while (acc > e);
    printf("\n Root of the equation is %6.4f", x1);
    printf("\n Actual no.of iterations required = %d", k);
    return 0;
}