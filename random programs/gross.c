#include <stdio.h>
int main()
{
    float basic, pf, hra, da, net, gross, x;
    printf("\nEnter Basic : ");
    scanf("%f", &basic);
    printf("\nEnter PF : ");
    scanf("%f", &x);
    pf = x / 100;
    hra = (basic * 15) / 100;
    da = ((basic + hra) * 51) / 100;
    gross = basic + da + hra;
    net = gross - pf;
    printf("\nGross Salary : %.2f", gross);
    printf("\nNet Salary : %.2f", net);
    return 0;
}