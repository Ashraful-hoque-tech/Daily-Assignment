//Write a program to Create salary management system. 

#include <stdio.h>

int main() {
    int empId;
    char name[50];
    float basic, hra, da, pf, grossSalary, netSalary;

    // Input
    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    // Salary Calculation
    hra = basic * 0.20;   // 20% HRA
    da = basic * 0.10;    // 10% DA
    pf = basic * 0.12;    // 12% PF

    grossSalary = basic + hra + da;
    netSalary = grossSalary - pf;

    // Output
    printf("\n========== SALARY SLIP ==========\n");
    printf("Employee ID   : %d\n", empId);
    printf("Employee Name : %s\n", name);
    printf("Basic Salary  : %.2f\n", basic);
    printf("HRA (20%%)     : %.2f\n", hra);
    printf("DA (10%%)      : %.2f\n", da);
    printf("PF (12%%)      : %.2f\n", pf);
    printf("---------------------------------\n");
    printf("Gross Salary  : %.2f\n", grossSalary);
    printf("Net Salary    : %.2f\n", netSalary);

    return 0;
}