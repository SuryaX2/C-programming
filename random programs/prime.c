#include<stdio.h>
int prime(int n){
    int f = 1;
    if(n%2==0){
        f = 0;
        return f;
    }
    else
        return f;
}
int main()
{
    int n;
    printf("\nEnter Number : ");
    scanf("%d", &n);
    for (int i = 1; i < n;i++){
        if (prime(i)){
            printf("%d ", n);
        }
    }

    return 0;
}