// 52.WAP to print Floyd’s triangle
#include <stdio.h>
void floydTriangle(int n) {
    int k = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", k++);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    floydTriangle(n);
    return 0;
}