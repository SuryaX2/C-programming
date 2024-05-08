//check er a number magic or not 
#include<stdio.h>
int main()
{
	int n,x,s=0,rem,s1=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
		rem=n%10;
		s=s+rem;
	}
	for(;s>0;s=s/10)
	{
		rem=s%10;
		s1=s1+rem;
	}
	if(s1==1)
		printf("%d is MAGIC no.",x);
	else
		printf("%d is Not MAGIC no.",x);
	return 0;
}

