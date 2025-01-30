#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    float sal;
};
int main() {
    int n, i, max = 0;
    printf("Enter the number of emp: ");
    scanf("%d", &n);
    struct Employee emp[n];
    for (i = 0; i < n; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", emp[i].name);
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &emp[i].sal);
    }
    for (i = 1; i < n; i++) {
        if (emp[i].sal > emp[max].sal) {
            max = i;
        }
    }
    printf("The employee with the highest salary is %s with a salary of %.2f\n", emp[max].name, emp[max].sal);
    return 0;
}