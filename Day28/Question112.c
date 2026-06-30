//Write a program to Create contact management system. 

#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

struct Contact contact;

// Function to add contact
void addContact() {
    printf("\nEnter Name: ");
    scanf(" %[^\n]", contact.name);

    printf("Enter Phone Number: ");
    scanf("%s", contact.phone);

    printf("Enter Email: ");
    scanf("%s", contact.email);

    printf("\nContact added successfully!\n");
}

// Function to display contact
void displayContact() {
    printf("\n----- Contact Details -----\n");
    printf("Name  : %s\n", contact.name);
    printf("Phone : %s\n", contact.phone);
    printf("Email : %s\n", contact.email);
}

// Function to search contact
void searchContact() {
    char searchName[50];

    printf("\nEnter Name to Search: ");
    scanf(" %[^\n]", searchName);

    if (strcmp(contact.name, searchName) == 0) {
        printf("\nContact Found!\n");
        displayContact();
    } else {
        printf("\nContact not found!\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contact\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContact();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}