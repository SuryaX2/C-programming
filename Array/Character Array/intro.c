#include <stdio.h>
int main()
{
	int i, n;
	char a[50];
	printf("Enter String : ");
	gets(a);
	i = 0;
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
	printf("\nNo. of Character %d", i);
	return 0;
}
