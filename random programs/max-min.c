#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Insufficient arguments\n");
    }
    int max = atoi(argv[1]);
    int min = atoi(argv[1]);
    for (int i = 2; i < argc; i++) {
        int num = atoi(argv[i]);
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);
    return 0;
}