//Write a program to Create student record system using arrays and strings. 

#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student records
    printf("\n----- Student Records -----\n");

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].rollNo);
        printf("Name        : %s\n", s[i].name);
        printf("Marks       : %.2f\n", s[i].marks);
    }

    return 0;
}