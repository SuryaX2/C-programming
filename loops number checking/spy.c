//check whether a no. spy or not
#include<stdio.h>
int main()
{
	int n,x,rem,s=0,f=1;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
		rem=n%10;
		s=s+rem;
		f=f*rem;
	}
	if(s==f)
		printf("%d is SPY no.",x);
	else
		printf("%d is not SPY no.",x);
	return 0;
}
