#include<stdio.h>
int main()
{
    int n,s=0,s1=0,x,rem,y;
    printf("Enter Number = ");
    scanf("%d",&n);
    if(n>0)
    {
        for (x=n;n>0;n=n/10) //Loop For SOD
        {
            rem=n%10;
            s=s+rem;
        }
        for (y=s;s>0;s=s/10)
        {
            rem=s%10;
            s1=(s1*10)+rem; //Loop For Reverse the SOD
        }
        if((y*s1)==x)
            printf("Its Magic no.");
        else 
            printf("Its NOT Magic no.");
    }
    else
        printf("Number Cant BE NEGETIVE");
    return 0;
}