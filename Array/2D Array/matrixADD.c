#include <stdio.h>
int main()
{
	int r, c, i, j;
	printf("\nEnter Number of ROW and COLUMN : ");
	scanf("%d%d", &r, &c);
	int a[r][c], b[r][c], x[r][c];
	if (r == c)
	{
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				printf("\nEnter matrix A : ");
				scanf("%d", &a[i][j]);
				printf("\nEnter matrix B : ");
				scanf("%d", &b[i][j]);
				x[i][j] = a[i][j] + b[i][j];
			}
			printf("\n");
		}
		printf("\n::\tAfter Addition\t  ::\n");
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
				printf("%5d ", x[i][j]);
			printf("\n");
		}
	}
	else
		printf("Row & Coloums Are not EQUAL !!");
	return 0;
}