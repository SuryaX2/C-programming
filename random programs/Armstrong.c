#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Insufficient arguments\n");
        return 1;
    }
    int n = atoi(argv[1]);
    int x, rem, c = 0, s = 0;
    x = n;
    for (x = n; x != 0; x /= 10) {
        c++;
    }
    x = n;
    for (x = n; x != 0; x /= 10) {
        rem = x % 10;
        s += pow(rem, c);
    }
    if (s == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}