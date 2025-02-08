// 4.WAP to identify A number is positive or negative
#include <stdio.h>
int checkSign(int num) {
    return (num >= 0) ? 1 : 0;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (checkSign(num)) {
        printf("%d is a positive number\n", num);
    } else {
        printf("%d is a negative number\n", num);
    }
    return 0;
}