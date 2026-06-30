//Write a program to Create marksheet generation system. 

#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float s1, s2, s3, s4, s5;
    float total, percentage;

    // Input
    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks of 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &s1);
    printf("Subject 2: ");
    scanf("%f", &s2);
    printf("Subject 3: ");
    scanf("%f", &s3);
    printf("Subject 4: ");
    scanf("%f", &s4);
    printf("Subject 5: ");
    scanf("%f", &s5);

    // Calculate Total and Percentage
    total = s1 + s2 + s3 + s4 + s5;
    percentage = total / 5;

    // Display Marksheet
    printf("\n========== MARKSHEET ==========\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", roll);
    printf("-------------------------------\n");
    printf("Subject 1 : %.2f\n", s1);
    printf("Subject 2 : %.2f\n", s2);
    printf("Subject 3 : %.2f\n", s3);
    printf("Subject 4 : %.2f\n", s4);
    printf("Subject 5 : %.2f\n", s5);
    printf("-------------------------------\n");
    printf("Total Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    // Result
    if (s1 >= 33 && s2 >= 33 && s3 >= 33 && s4 >= 33 && s5 >= 33)
        printf("Result : PASS\n");
    else
        printf("Result : FAIL\n");

    // Grade
    if (percentage >= 90)
        printf("Grade : A+\n");
    else if (percentage >= 80)
        printf("Grade : A\n");
    else if (percentage >= 70)
        printf("Grade : B\n");
    else if (percentage >= 60)
        printf("Grade : C\n");
    else if (percentage >= 50)
        printf("Grade : D\n");
    else
        printf("Grade : F\n");

    return 0;
}