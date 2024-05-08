// check whether a number perfect of not
#include <stdio.h>
int perfect(int n)
{
	int i, s = 0;
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			s = s + i;
		}
	}
	return n == s;
}
int main()
{
	int n, i;
	printf("Enter the UpperBound : ");
	scanf("%d", &n); 
	printf("Perfect numbers between 1 and %d are: ", n);
	for (i = 1; i <= n; i++)
	{
		if (perfect(i))
			printf("%d ", i);
	}
	return 0;
}
