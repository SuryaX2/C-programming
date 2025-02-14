#include <stdio.h>
int main() {
    int a = 5;
    {
        // a = 4;
        {
            int a = 3;
            printf("%d", a);
        }
        printf("%d", a);
    }
    printf("%d", a);
}