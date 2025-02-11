// 18.WAP to find out Fibonacci series up to n terms
#include <stdio.h>
void fibonacci(int n) {
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d terms is: ", n);
    fibonacci(n);
    return 0;
}