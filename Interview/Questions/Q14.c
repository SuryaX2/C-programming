// 14.WAP to find out Sum of N natural numbers
#include <stdio.h>
int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}