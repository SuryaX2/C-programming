// check whether a no. is prime or not
#include <stdio.h>
int main()
{
	int n, i, f = 0;
	printf("Enter Number : ");
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			f = 1;
			break;
		}
	}
	if (f == 0)
		printf("%d is PRIME no.", n);
	else
		printf("%d is not PRIME no.", n);
	return 0;
}
