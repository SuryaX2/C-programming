#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("\nEnter Row : ");
    scanf("%d", &r);
    printf("\nEnter Coloumn : ");
    scanf("%d", &c);
    int a[r][c];
    if (r == c)
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("\nEnter Value for %d,%d position : ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        printf("\nMatrix : \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
                printf("%5d", a[i][j]);
            printf("\n");
        }
        printf("\nDiagonal Matrix : \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (i == j)
                    printf("%5d ", a[i][j]);
            else
            printf("%5c",32);
            }
            printf("\n");
        }
    }
    else
        printf("\nRow And Coloum isn't same !!");
    return 0;
}
