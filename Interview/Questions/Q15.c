// 15.WAP to find out Sum of numbers in a given range
#include <stdio.h>
int sumOfRange(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++)
        sum += i;
    return sum;
}
int main() {
    int start, end;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);
    printf("Sum of numbers in the range %d to %d is %d\n", start, end, sumOfRange(start, end));
    return 0;
}