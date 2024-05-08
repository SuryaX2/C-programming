// Write a program to create a data base of minimum 10 students with four different parameter?
#include <stdio.h>
struct student
{
    char name[100];
    char id[20];
    int roll;
    float p;
};
int main()
{
    int i;
    struct student s[10];
    for (i = 0; i < 2; i++)
    {
        printf("\nEnter Your Name : ");
        scanf("%s", &s[i].name);
        printf("\nEnter Your ID No. : ");
        scanf("%s", &s[i].id);
        printf("\nEnter Your Roll No. : ");
        scanf("%d", &s[i].roll);
        printf("\nEnter Your Percentage : ");
        scanf("%f", &s[i].p);
        printf("\n");
    }
    printf("\n\n::::STUDENT DATABASE::::");
    for (i = 0; i < 2; i++)
    {
        printf("\nName : ");
        puts(s[i].name);
        printf("ID No. : ");
        puts(s[i].id);
        printf("Roll No. : %d \n", s[i].roll);
        printf("Percentage : %0.2f", s[i].p);
        printf("\n");
    }
    return 0;
}
