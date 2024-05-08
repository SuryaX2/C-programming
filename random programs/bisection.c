#include <stdio.h>
#include <math.h>
float f(float x)
{
    float a = pow(x, 3) - x - 4;
    return a;
}
int main()
{
    float a, b, e, x0;
    int k = 0;
    printf("\nEnter Accuracy : ");
    scanf("%f", &e);
    do
    {
        printf("\nEnter Interval a,b : ");
        scanf("%f%f", &a, &b);
    } while (f(a) * f(b) > 0);
    do
    {
        x0 = (a + b) / 2;
        printf("\nI=%d a=%f b=%f x0=%f f(x0)=%f |b-a|=%f", k + 1, a, b, x0, f(x0), fabs(b - a));
        if (f(a) * f(x0) < 0)
            b = x0;
        else
            a = x0;
        k++;
    } while (fabs(b - a) > e);
    printf("\nRoot of the equation : %f", x0);
    return 0;
}