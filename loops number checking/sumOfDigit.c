// sum of digit of a number
#include <stdio.h>
int main()
{
	int n, x, s = 0, rem, c = 0;
	printf("Enter Your Number : ");
	scanf("%d", &n);
	for (x = n; n > 0; n = n / 10)
	{
		rem = n % 10;
		s = s + rem;
		c++;
	}
	printf("\nNo of Digits = %d", c);
	printf("\nSum = %d", s);
	return 0;
}
