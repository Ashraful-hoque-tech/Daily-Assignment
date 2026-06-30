//Write a program to Create employee management system. 

#include <stdio.h>

int main() {
    int empId;
    char name[50], department[30];
    float basicSalary, hra, da, totalSalary;

    // Input Employee Details
    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Department: ");
    scanf("%s", department);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Salary Calculation
    hra = basicSalary * 0.20;   // 20% HRA
    da = basicSalary * 0.10;    // 10% DA
    totalSalary = basicSalary + hra + da;

    // Display Employee Details
    printf("\n========== EMPLOYEE DETAILS ==========\n");
    printf("Employee ID   : %d\n", empId);
    printf("Employee Name : %s\n", name);
    printf("Department    : %s\n", department);
    printf("Basic Salary  : %.2f\n", basicSalary);
    printf("HRA           : %.2f\n", hra);
    printf("DA            : %.2f\n", da);
    printf("Total Salary  : %.2f\n", totalSalary);

    return 0;
}