#include <stdio.h>
int palin(int n)
{
    int rem, s = 0;
    for (int x = n; x > 0;x=x/10){
        rem = n % 10;
        s = (s * 10) + rem;
    }
    if(n==s)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (palin(i))
            printf("%d ", i);
    }
    return 0;
}