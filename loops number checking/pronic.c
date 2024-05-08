//check whether a no. pronic or not 
#include<stdio.h>
int main()
{
	int n,i,f=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(i*(i+1)==n)
		{
			f=1;
			break;
		}
	}
	if(f==1)
		printf("%d is PRONIC no.",n);
	else 
		printf("%d is not PRONIC no.",n);
	return 0;
}
