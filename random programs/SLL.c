#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void create()
{
    struct Node *newNode;
    int x;
    head = (struct Node *)malloc(sizeof(struct Node));
    if (head == NULL)
        printf("Memory can't be allocated");
    else
    {
        printf("\nEnter Data : ");
        scanf("%d", &x);
        head->data = x;
        head->next = NULL;
    }
}
void insert()
{
    struct Node *p, *end;
    int x;
    end = head;
    while (end->next != NULL)
        end = end->next;
    p = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter Data : ");
    scanf("%d", &x);
    p->data = x;
    p->next = NULL;
    end->next = p;
}
void display()
{
    struct Node *p;
    p = head;
    while (p != NULL)
    {
        printf("%d-->", p->data);
        p = p->next;
    }
}
int main()
{
    int ch;
    while (1)
    {
        system("cls"); //......... this command is used to clear the old screen
        printf("Press 1 for Create\nPress 2 for Display\nPress 3 for Insert\n");
        printf("Enter the Choice = ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create(); // calling
            break;
        case 2:
            display(); // calling
            break;
        case 3:
            insert(); // calling
            break;
        default:
            printf("\nClosing program........");
            exit(1);
        }
        printf("\n\n");
        system("pause"); //.......this command is used to halt the output screen
    }
    return 0;
}