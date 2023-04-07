#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n, i, max_index;
    float max_salary = 0.0;
    struct Employee employees[MAX_EMPLOYEES];

    // Accept details of n employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i+1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].eno);
        printf("Employee Name: ");
        scanf("%s", employees[i].ename);
        printf("Employee Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Find the employee with the highest salary
    for (i = 0; i < n; i++) {
        if (employees[i].salary > max_salary) {
            max_salary = employees[i].salary;
            max_index = i;
        }
    }

    // Display the details of the employee with the highest salary
    printf("\nEmployee with highest salary:\n");
    printf("Employee Number: %d\n", employees[max_index].eno);
    printf("Employee Name: %s\n", employees[max_index].ename);
    printf("Employee Salary: %.2f\n", employees[max_index].salary);

    return 0;
}

