#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, r1, r2, c1, c2, r3, c3;
    printf("Please Enter The Number Of Row Of First Matrix- ");
    scanf("%d", &r1);
    printf("Please Enter The Number Of Column Of First Matrix- ");
    scanf("%d", &c1);
    printf("Please Enter The Number Of Row Of Second Matrix- ");
    scanf("%d", &r2);
    printf("Please Enter The Number Of Column Of Second Matrix- ");
    scanf("%d", &c2);
    printf("\n\n");
    if (c1 == r2)
    {
        // Array Receiving
        int a[r1][c1], b[r2][c2], c[c1][r2], s = 0, d = 0, e;
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("Enter The Number For %d ) Row & %d ) Column Of 1st Array- ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("Enter The Number For %d ) Row & %d ) Column Of 2nd Array- ", i, j);
                scanf("%d", &b[i][j]);
            }
        }
        // Array Printing
        printf("\n\nThe Multiplication Of--\n");
        printf("\n\t\t\t");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
                printf("%d ", a[i][j]);
            printf("\n\t\t\t");
        }
        printf("\n\t\t    AND \n");
        printf("\n\t\t\t");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
                printf("%d ", b[i][j]);
            printf("\n\t\t\t");
        }
        // Array Calculation
        printf("\n\t\t    IS---\n");
        printf("\n\t\t\t");
        for (i = 0; i < r1; i++)
        {
            for (d = 0; d < c2; d++)
            {
                for (j = 0; j < r2; j++)
                    s = a[i][j] * b[j][d] + s;
                c[i][d] = s;
                printf("%d ", c[i][d]);
                s = 0;
            }
            printf("\n\t\t\t");
        }
        
    }
    else
        printf("Please Enter Same Value Of Row Of First Matrix And Column Of Second Matrix");
    
    getch();
}