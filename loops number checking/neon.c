//check whether a no. neon or not
#include<stdio.h>
int main()
{
	int n,sq,s=0,rem;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(sq=n*n;sq>0;sq=sq/10)
	{
		rem=sq%10;
		s=s+rem;
	}
	if(s==n)
		printf("%d is NEON no.",n);
	else
		printf("%d is not NEON no.",n);
	return 0;
}
