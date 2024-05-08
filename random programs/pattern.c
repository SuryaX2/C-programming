#include<stdio.h>
int main()
{
	int i,j,n,a,k,sp=1,l;
	printf("Enter Range : ");
	scanf("%d",&n);
	for(a=1;a<=(2*n-1);a++)
	{
		Sleep(10);
		printf("*");
	}
	printf("\n");
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=(n+1-i);j++)
		{
			Sleep(10);
			printf("*");
		}
		for(k=1;k<=sp;k++)
		{
			Sleep(10);
			printf(" ");
		}
		sp+=2;
		for(l=1;l<=(n+1-i);l++)
		{
			Sleep(10);
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
