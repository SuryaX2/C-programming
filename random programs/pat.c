#include <stdio.h>
void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
            printf("%d", i);
        printf("\n");
    }
}
void pattern2(int n)
{
        for (int i = 0; i < n; i++)
        {
            char c = 'A' + i;
            for (int j = 0; j <= i; j++)
            {
                printf("%c ", c);
                c++;
            }
            printf("\n");
        }
}
int main()
{
    int n;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    pattern1(n);
    pattern2(n);
    return 0;
}