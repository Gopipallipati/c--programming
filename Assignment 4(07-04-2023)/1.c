#include <stdio.h>
#include <string.h>

#define MAX_DEPT_NAME 50
#define MAX_NAME 50

struct Employee {
    int id;
    char name[MAX_NAME];
    char designation[MAX_NAME];
    char department[MAX_DEPT_NAME];
    float salary;
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Designation: ");
    scanf("%s", emp.designation);

    printf("Enter Employee Department: ");
    scanf("%s", emp.department);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    printf("\nEmployee Details\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}

