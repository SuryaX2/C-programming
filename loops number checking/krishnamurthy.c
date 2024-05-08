//check whether a no. krishnamurthy no. or not
#include<stdio.h>
int main()
{
	int n,x,rem,s=0,f=1,i;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
		rem=n%10;
		for(i=1;i<=rem;i++)
			f=f*i;
		s=s+f;
		f=1;
	}
	if(x==s)
		printf("%d is KRISHNAMURTHY no.",x);
	else
		printf("%d is not KRISHNAMURTHY no.",x);
	return 0;
}
