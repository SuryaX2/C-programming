#include <stdio.h>
int main()
{
    int r, c, i, j, f = 0;
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
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (a[i][j] != 0)
                {
                    f = 1;
                    break;
                }
            }
        }
        if (f == 0)
            printf("\nIts A NULL Matrix !!");
        else
            printf("\nIts Not NULL Matrix !!");
    }
    else
        printf("\nRow And Coloum isn't same !!");
    return 0;
}
