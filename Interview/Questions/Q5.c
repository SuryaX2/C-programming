// 5.WAP to identify A number is even or odd
#include <stdio.h>
int isEven(int num) {
    return num % 2 == 0;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("0 is neither even nor odd number\n");
    }
    if (isEven(num)) {
        printf("%d is an even number\n", num);
    } else {
        printf("%d is an odd number\n", num);
    }
    return 0;
}