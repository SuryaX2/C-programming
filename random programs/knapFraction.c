#include <stdio.h>
void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    double w[50], p[50], r[50], tValue = 0.0, cap;
    int n, i, j;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter Weight and Profit for item[%d]:\n", i);
        scanf("%lf %lf", &w[i], &p[i]);
    }
    printf("Enter the capacity of knapsack:\n");
    scanf("%lf", &cap);
    for (i = 0; i < n; i++)  // Calculate profit-to-weight ratio
        r[i] = p[i] / w[i];
    for (i = 0; i < n; i++) {  // Sort items based on profit-to-weight ratio
        for (j = i + 1; j < n; j++) {
            if (r[i] < r[j]) {
                swap(&r[i], &r[j]);
                swap(&w[i], &w[j]);
                swap(&p[i], &p[j]);
            }
        }
    }
    printf("Knapsack problem using Greedy Algorithm:\n");
    for (i = 0; i < n; i++) {  // Greedily add items to knapsack
        if (w[i] > cap)
            break;
        else {
            tValue += p[i];
            cap -= w[i];
        }
    }
    if (i < n)  // Add fractional part of the next item
        tValue += (r[i] * cap);
    printf("\nThe maximum value is: %lf\n", tValue);
    return 0;
}