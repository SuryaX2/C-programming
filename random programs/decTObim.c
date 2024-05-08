// decimal to binary
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, d, i, rem, a[5], x;
    printf("Enter the No. = ");
    scanf("%d", &n);
    d = n;
    for (i = 0; n > 0; n = n / 2)
    {
        rem = n % 2;
        a[i] = rem;
        i++;
        //  x=rem;
    }
    // a[i]=x;
    printf("\nDecimal No.= %d", d);
    printf("\nEquivalent Binary No. = ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    getch();
}