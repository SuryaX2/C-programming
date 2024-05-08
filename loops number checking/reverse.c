// reverse of a number
#include <stdio.h>
int main()
{
	int n, x, s = 0, rem;
	printf("Enter Your Number : ");
	scanf("%d", &n);
	for (x = n; n > 0; n = n / 10)
	{
		rem = n % 10;
		s = (s * 10) + rem;
	}
	printf("Reverse no. = %d", s);
	return 0;
}