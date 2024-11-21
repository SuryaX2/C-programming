#include <stdio.h>
int prime(int n){
    int f = 1;
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            f = 0;
            return f;
        }
        else
            return f;
    }
}
int main(){
    int n;
    printf("\nEnter Range : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if (prime(i)){
            printf("%d ", i);
        }
    }
    return 0;
}