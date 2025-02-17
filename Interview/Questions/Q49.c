// 49.WAP to print Pyramid pattern using numbers
#include <stdio.h>
void pyramidUsingNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    pyramidUsingNumbers(n);
    return 0;
}