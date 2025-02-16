// 45.WAP to find out Roots of a quadratic equation
#include <math.h>
#include <stdio.h>

void findRoots(int a, int b, int c) {
    float d = b * b - 4 * a * c;
    if (d > 0) {
        float r1 = (-b + sqrt(d)) / (2 * a);
        float r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.2f and %.2f\n", r1, r2);
    } else if (d == 0) {
        float r1 = -b / (2 * a);
        printf("Roots are real and same: %.2f\n", r1);
    } else {
        float real = -b / (2 * a);
        float imag = sqrt(-d) / (2 * a);
        printf("Roots are imaginary: (%.2f + %.2fi) and (%.2f - %.2fi)\n", real, imag, real, imag);
    }
}

int main() {
    int a, b, c;
    printf("Enter the coefficients of the quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);
    findRoots(a, b, c);
    return 0;
}
