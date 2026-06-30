//Write a program to Create mini employee management system. 

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Department: ");
        scanf(" %[^\n]", emp[i].department);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee records
    printf("\n----- Employee Records -----\n");

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", emp[i].id);
        printf("Name        : %s\n", emp[i].name);
        printf("Department  : %s\n", emp[i].department);
        printf("Salary      : %.2f\n", emp[i].salary);
    }

    return 0;
}