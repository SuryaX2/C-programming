// check whether a no. armstrong or not
#include <stdio.h>
#include <math.h>
int main()
{
	int n, c, rem, p, s = 0, x;
	printf("Enter Number : ");
	scanf("%d", &n);
	for (x = n; n > 0; n = n / 10)
	{
		c++;
	}
	for (n = x; n > 0; n = n / 10)
	{
		rem = n % 10;
		p = pow(rem, c);
		s = s + p;
	}
	if (s == x)
		printf("%d is ARMSTRONG no.", x);
	else
		printf("%d is not ARMSTRONG no.", x);
	return 0;
}
