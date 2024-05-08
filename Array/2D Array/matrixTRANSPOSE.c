#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("\nEnter Number of ROW : ");
    scanf("%d", &r);
    printf("\nEnter Number of COLOUMN : ");
    scanf("%d", &c);
    int a[r][c], b[r][c];
    if (r == c)
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("\nEnter matrix A's %d,%d Position's Value : ", i, j);
                scanf("%d", &a[i][j]);
                b[j][i] = a[i][j];
            }
            printf("\n");
        }
        printf("\n::\tTranspose Matrix\t::\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%5d ", b[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nTranspose cant be found !");

    return 0;
}
