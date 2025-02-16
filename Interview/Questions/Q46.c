// 46.WAP to print Solid rectangle star pattern
#include <stdio.h>
void solidRectangle(int r, int c) {
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int r, n;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    solidRectangle(r, n);
    return 0;
}