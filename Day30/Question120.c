//Write a program to Develop complete mini project using arrays, strings and functions. 

#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

// Function to add students
void addStudent() {
    printf("Enter number of students to add: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
}

// Function to display students
void displayStudent() {
    if (n == 0) {
        printf("\nNo records found!\n");
        return;
    }

    printf("\n----- Student Records -----\n");
    for (int i = 0; i < n; i++) {
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }
}

// Function to search student
void searchStudent() {
    int roll, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("\nRecord Found");
            printf("\nRoll No : %d", s[i].roll);
            printf("\nName    : %s", s[i].name);
            printf("\nMarks   : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nStudent not found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Student Management System =====");
        printf("\n1. Add Students");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudent();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Exiting Program...");
                break;
            default:
                printf("Invalid Choice!");
        }

    } while (choice != 4);

    return 0;
}