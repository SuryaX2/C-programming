// decimal to Hexadecimal
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, d, i, rem, a[5], x;
    printf("Enter the No. = ");
    scanf("%d", &n);
    d = n;
    for (i = 0; n > 0; n = n / 16)
    {
        rem = n % 16;
        a[i] = rem;
        i++;
    }
    printf("\nDecimal No.= %d", d);
    printf("\nEquivalent Hexadecimal No. = ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", a[i]);
    getch();
}