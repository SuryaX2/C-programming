#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Insufficient arguments\n");
        return 1;
    }
    int num = atoi(argv[1]);
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number: %d\n", rev);
    return 0;
}