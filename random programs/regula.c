#include <stdio.h>
#include <math.h>
float f(float x)
{
    float a = pow(x, 3) - x - 4;
    return a;
}
int main()
{
    float a, b, e, x1;
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
        x1 = (a * f(b) - b * f(a)) / (f(b) - f(a));
        printf("\nI = %d a = %f b = %f x1 = %f f(x1) = %f f(a) = %f f(b) = %f",
               k + 1, a, b, x1, f(x1), f(a), f(b));
        if (f(a) * f(x1) < 0)
            b = x1;
        else
            a = x1;
        k++;
    } while (fabs(f(x1)) > e);
    printf("\nRoot of the equation : %f", x1);
    return 0;
}