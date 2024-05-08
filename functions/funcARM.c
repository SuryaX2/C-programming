#include <stdio.h>
#include <math.h>
int isArm(int num)
{
    int c = 0, sum = 0,n;
    for (n = num; n != 0; n = n / 10)
        c++;
    for (n = num; n != 0; n = n / 10)
        sum += pow(n % 10, c);
    if (sum == num)
        return 1;
    else
        return 0;
}
void printArm(int ll, int ul)
{
    for (int i = ll; i <= ul; i++)
    {
        if (isArm(i))
            printf("%d ", i);
    }
}
int main()
{
    int ll, ul;
    printf("Enter lower and upper limit to generate all Armstrong numbers in between:");
    scanf("%d %d", &ll, &ul);
    printArm(ll, ul);
    return 0;
}