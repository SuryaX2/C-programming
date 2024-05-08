#include <stdio.h>
#include <math.h>
float f(float x)
{
    float f1;
    return f1 = pow(x, 3) - x - 4;
}
int main()
{
    float a, b, x1, e;
    int k = 0;
    printf("\n Enter accuracy : ");
    scanf("%f", &e);
    do
    {
        printf("\n Enter interval a, b : ");
        scanf("%f%f", &a, &b);
    } while (f(a) * f(b) > 0);
    do
    {
        // x1 = a - ((f(a) * (b - a)) / (f(b) - f(a)));
        x1 = (a * f(b) - b * f(a)) / (f(b) - f(a));
        printf("\nI = %d a = %f b = %f x1 = %f f(x1) = %f f(a) = %f f(b) = %f",
               k + 1, a, b, x1, f(x1), f(a), f(b));
        if (f(a) * f(x1) < 0)
            b = x1;
        else
            a = x1;
        k++;
    } while (fabs(f(x1)) > e);
    printf("\n Root of the equation is % 6.4f", x1);
    printf("\n Actual no.of iteration required to achieve desired accuracy : %d", k);
    return 0;
}