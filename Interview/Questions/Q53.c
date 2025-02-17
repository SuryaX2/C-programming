// 53.WAP to print Pascal triangle
#include <stdio.h>
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}
void pascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        for (int j = 0; j <= i; j++) {
            printf("%d ", fact(i) / (fact(j) * fact(i - j)));
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    pascalTriangle(n);
    return 0;
}
