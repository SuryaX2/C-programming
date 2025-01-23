#include <stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int knapsack(int W, int wt[], int val[], int n) {
    int i, j;
    int knap[n + 1][W + 1];
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= W; j++) {
            if (i == 0 || j == 0)
                knap[i][j] = 0;
            else if (wt[i - 1] <= j)
                knap[i][j] = max(val[i - 1] + knap[i - 1][j - wt[i - 1]], knap[i - 1][j]);
            else
                knap[i][j] = knap[i - 1][j];
        }
    }
    return knap[n][W];
}
int main() {
    int val[] = {20, 25, 40};
    int wt[] = {25, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    printf("The solution is : %d", knapsack(W, wt, val, n));
    return 0;
}
