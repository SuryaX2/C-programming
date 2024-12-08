/*
    Enter The Number Of Rows : 4
    4 4 4 4 4 4 4 
    4 3 3 3 3 3 4 
    4 3 2 2 2 3 4 
    4 3 2 1 2 3 4 
    4 3 2 2 2 3 4 
    4 3 3 3 3 3 4 
    4 4 4 4 4 4 4
*/
#include <stdio.h>
void printPattern(int n)
{
    int N = 2 * n - 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int min = (i < j ? i : j);
            min = (min < N - i - 1) ? min : (N - i - 1);
            min = (min < N - j - 1) ? min : (N - j - 1);
            printf("%d ", n - min);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("\nEnter The Number Of Rows : ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}