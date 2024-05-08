#include<stdio.h>
int main()
{
    int i,j,n,sp,a,k=2,l;
    printf("Enter Range = ");
    scanf("%d",&n);
    l=(2*n)-2;
    for(a=1;a<=(2*n);a++)
        {
            printf("*");
        }
    printf("\n");
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=((n+1)-i);j++)
        {
            printf("*");
        }
		for(sp=1;sp<=k;sp++)
        {
            printf(" ");
        }
        k+=2;
        for(j=((n+1)-i);j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
		for(sp=1;sp<=l;sp++)
        {
            printf(" ");
        }
        l-=2;
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(a=1;a<=(2*n);a++)
        {
            printf("*");
        }
    return 0;
}
