//Write a program to Create ticket booking system. 


#include <stdio.h>
#include <string.h>

struct Ticket {
    int ticketNo;
    char name[50];
    int seats;
    int booked;   // 0 = Not Booked, 1 = Booked
};

struct Ticket ticket;

// Function to book ticket
void bookTicket() {
    printf("\nEnter Ticket Number: ");
    scanf("%d", &ticket.ticketNo);

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", ticket.name);

    printf("Enter Number of Seats: ");
    scanf("%d", &ticket.seats);

    ticket.booked = 1;

    printf("\nTicket booked successfully!\n");
}

// Function to cancel ticket
void cancelTicket() {
    if (ticket.booked) {
        ticket.booked = 0;
        printf("\nTicket cancelled successfully!\n");
    } else {
        printf("\nNo ticket has been booked yet!\n");
    }
}

// Function to display ticket details
void displayTicket() {
    if (ticket.booked) {
        printf("\n----- Ticket Details -----\n");
        printf("Ticket Number : %d\n", ticket.ticketNo);
        printf("Passenger Name: %s\n", ticket.name);
        printf("Seats         : %d\n", ticket.seats);
        printf("Status        : Booked\n");
    } else {
        printf("\nNo ticket booked.\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Display Ticket\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookTicket();
                break;
            case 2:
                cancelTicket();
                break;
            case 3:
                displayTicket();
                break;
            case 4:
                printf("Thank you for using the Ticket Booking System!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}