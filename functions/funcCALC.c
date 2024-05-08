#include <stdio.h>
void add(int, int);
void sub(int, int);
void multi(int, int);
void divi(int, int);
void mod(int, int);
void sq(int);
int main()
{
    int ch, a, b;
    while (1)
    {
        printf("\n::::CALCULATOR::::");
        printf("\n_______MENU_______\n");
        printf("Press 1 : Addition\n");
        printf("Press 2 : Subtraction\n");
        printf("Press 3 : Multiplication\n");
        printf("Press 4 : Division\n");
        printf("Press 5 : Modular Division\n");
        printf("Press 6 : Square Root\n");
        printf("Press 7 : EXIT\n");
        printf("\nEnter Your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter 2 Numbers : ");
            scanf("%d%d", &a, &b);
            add(a, b);
            break;
        case 2:
            printf("\nEnter 2 Numbers : ");
            scanf("%d%d", &a, &b);
            sub(a, b);
            break;
        case 3:
            printf("\nEnter 2 Numbers : ");
            scanf("%d%d", &a, &b);
            multi(a, b);
            break;
        case 4:
            printf("\nEnter 2 Numbers : ");
            scanf("%d%d", &a, &b);
            divi(a, b);
            break;
        case 5:
            printf("\nEnter 2 Numbers : ");
            scanf("%d%d", &a, &b);
            mod(a, b);
            break;
        case 6:
            printf("\nEnter 1 Numbers : ");
            scanf("%d", &a);
            sq(a);
            break;
        case 7:
        	printf("\nTHANKS FOR USING !!");
            exit(0);
            break;
        }
    }
    return 0;
}
void add(int a, int b)
{
    printf("\n%d+%d = %d", a, b, a + b);
    printf("\nAdditon Successful\n");
}
void sub(int a, int b)
{
    printf("\n%d-%d = %d", a, b, a - b);
    printf("\nSubtraction Successful\n");
}
void multi(int a, int b)
{
    printf("\n%dx%d = %d", a, b, a * b);
    printf("\nMultiplication Successful\n");
}
void divi(int a, int b)
{
    printf("\n%d/%d = %d", a, b, a / b);
    printf("\nDivision Successful\n");
}
void mod(int a, int b)
{
    printf("\n%d modulo %d = %d", a, b, a % b);
    printf("\nModular Division Successful\n");
}
void sq(int a)
{
    printf("\n%d^2 = %d", a, a*a );
    printf("\nSquare Successful\n");
}
