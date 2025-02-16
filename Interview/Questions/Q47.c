// 47.WAP to print hollow rectangle star pattern
#include <stdio.h>
void hollowRectangle(int r, int c) {
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (i == 1 || i == r || j == 1 || j == c) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    hollowRectangle(r, c);
    return 0;
}