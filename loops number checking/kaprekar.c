//check whether a no. kaprekar or not 
#include<stdio.h>
#include<math.h>
int main()
{
	int n,sq,b,a,rem,s=0,c=0,x;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
		c++;
	}
	sq=x*x;
	a=pow(10,c);
	rem=sq%a;
	b=sq/a;
	s=rem+b;
	if(x==s)
		printf("%d is KAPREKAR no.",x);
	else 
		printf("%d is not KAPREKAR no.",x);
	return 0;
}
