// 71.WAP to find out Symmetric pairs in an array
#include <stdio.h>

void symmetricPairs(int a[][2], int n) {
    printf("Symmetric pairs: \n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][0] == a[j][1] && a[i][1] == a[j][0]) {
                printf("(%d,%d)\n", a[i][0], a[i][1]);
                break;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of pairs: ");
    scanf("%d", &n);
    int a[n][2];
    for (int i = 0; i < n; i++) {
        printf("Enter pair %d: ", i + 1);
        scanf("%d %d", &a[i][0], &a[i][1]);
    }
    symmetricPairs(a, n);
    return 0;
}