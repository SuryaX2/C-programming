//check whether a no. abundunt or not 
#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			s=s+i;	
	}
	if(s>n)
		printf("%d is ABUNDUNT no.",n);
	else 
		printf("%d is not ABUNDUNT no.",n);
	return 0;
}
