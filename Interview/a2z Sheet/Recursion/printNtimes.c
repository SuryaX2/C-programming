// Print name N times using recursion
#include <stdio.h>

char str[10];

void printName(int n) {
    if (n < 1) return;
    printf("%s\n", str);
    printName(n - 1);
}

int main() {
    int n;
    printf("Enter name: ");
    scanf("%s", str);
    printf("Enter number of times to print name: ");
    scanf("%d", &n);
    printName(n);
    return 0;
}