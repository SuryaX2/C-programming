// 43.WAP to find out Permutations in which n people can occupy r seats in a theatre
#include <stdio.h>
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}
int permutation(int n, int r) {
    return fact(n) / fact(n - r);
}
int main() {
    int n, r;
    printf("Enter the number of people: ");
    scanf("%d", &n);
    printf("Enter the number of seats: ");
    scanf("%d", &r);
    printf("The number of permutations is: %d", permutation(n, r));
    return 0;
}