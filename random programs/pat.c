#include<stdio.h>
void pattern(int n){
    for (int i = 1; i <= n;i++){
        for (int j = n; j >= i;j--)
            printf("*");
        printf("\n");
    }
}
int main()
{
    int n;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}