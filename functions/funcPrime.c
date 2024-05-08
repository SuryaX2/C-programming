#include <stdio.h>
void prime1();    // 1st type
int prime2();     // 2nd type
void prime3(int); // 3rd type
int prime4(int);  // 4th type
int n, f = 0;
int main()
{
    prime1();

    if (prime2() == 0)
        printf("%d is PRIME NO.\n", n);
    else
        printf("%d is NOT PRIME NO.\n", n);

    printf("\nEnter Number :");
    scanf("%d", &n);
    prime3(n);

    printf("\nEnter Number :");
    scanf("%d", &n);
    if (prime4(n) == 0)
        printf("%d is PRIME NO.\n", n);
    else
        printf("%d is NOT PRIME NO.\n", n);
    return 0;
}
void prime1() // 1st Type no RETURN type
{
    int i;
    printf("Enter Number : ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
        printf("PRIME NO.\n");
    else
        printf("NOT PRIME NO.\n");
}
int prime2() // 2nd Type with RETURN type
{
    int i;
    printf("Enter Number : ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }
    return f;
}
void prime3(int num) // 3rd Type no RETURN type but with PARAMETER passing
{
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
        printf("%d is PRIME NO.\n", num);
    else
        printf("%d is NOT PRIME NO.\n", num);
}
int prime4(int num) // 4th Type with RETURN type with PARAMETER passing
{
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            f = 1;
            break;
        }
    }
    return f;
}