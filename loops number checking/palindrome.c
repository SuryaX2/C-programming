// check whethewr a number Palindrome or not
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
	if (s == x)
		printf("%d is PALINDROME no.", x);
	else
		printf("%d is Not PALINDROME no.", x);
	return 0;
}
