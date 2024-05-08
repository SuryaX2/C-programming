#include <stdio.h>
int main()
{
    
        // // A
        // // B C
        // // C D E
        // // D E F G
        // int n = 4;
        // char x = 'A';
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j <= i; j++)
        //         printf("%c ", x + j);
        //     printf("\n");
        //     x++;
        // }


    // // 1
    // // 2 3
    // // 4 5 6
    // // 7 8 9 10

    // int x = 1;
    // printf("\nThe pattern : \n");
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //         printf("%d ", x++);
    //     printf("\n");
    // }

    
        // 1
        // 0 1
        // 1 0 1
        // 0 1 0 1

        int x = 1;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%d ", x);
                x = 1 - x;
            }
            printf("\n");
        }
        return 0;
    
}