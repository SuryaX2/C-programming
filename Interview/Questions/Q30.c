// 30.WAP to find out Factors of a number
#include <stdio.h>
int factor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factors of %d are:\n",n);
    factor(n);
    return 0;
}