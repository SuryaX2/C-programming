#include<stdio.h>
int main()
{
    int x,n,rem,s=0,c=0,flag=0;
    printf("\nEnter Number : ");
    scanf("%d",&n);
    if(n<0)
        x=(-1)*n;
    else    
        x=n;
    while(x!=0)
    {
        rem=x%10;
        s=(s*10)+rem;
        c++;
        x=x/10;
    }
    x=s;
    while(x!=0)
    {
        flag++;
        x=x/10;
    }
    if(c!=flag)
    {
    	printf("\nReversed No. : ");
        if(n<0)
            printf("-");
        while(c!=flag)
        {
            printf("0");
            c--;
    	}
        printf("%d",s);
    }
    else
        printf("\nReverse No. : %d",s);
    return 0;
}

