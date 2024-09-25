#include <stdio.h>
int main(){
    float w[50], p[50], r[50], tValue, temp, cap, amount;
    int n, i, j;
    printf("Enter the number of items :");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Enter Weight and p for item[%d] :\n", i);
        scanf("%f %f", &w[i], &p[i]);
    }
    printf("Enter the cap of knapsack :\n");
    scanf("%f", &cap);
    for (i = 0; i < n; i++)
        r[i] = p[i] / w[i];
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (r[i] < r[j]){
                temp = r[j];
                r[j] = r[i];
                r[i] = temp;

                temp = w[j];
                w[j] = w[i];
                w[i] = temp;

                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
    printf("Knapsack problems using Greedy Algorithm:\n");
    for (i = 0; i < n; i++){
        if (w[i] > cap)
            break;
        else{
            tValue = tValue + p[i];
            cap = cap - w[i];
        }
    }
    if (i < n)
        tValue = tValue + (r[i] * cap);
    printf("\nThe maximum value is :%f\n", tValue);
    return 0;
}
