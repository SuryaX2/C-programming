//check whether a no. harshad or not 
#include<stdio.h>
int main()
{
	int n,x,rem,s=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
		rem=n%10;
		s=s+rem;
	}
	if(x%s==0)
		printf("%d is HARSHAD no.",x);
	else 
		printf("%d is not HARSHAD no.",x);
	return 0;
}
