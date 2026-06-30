//Write a program to Create bank account system. 

#include <stdio.h>
#include <string.h>

struct BankAccount {
    int accNo;
    char name[50];
    float balance;
};

struct BankAccount account;

// Function to create account
void createAccount() {
    printf("\nEnter Account Number: ");
    scanf("%d", &account.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", account.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &account.balance);

    printf("\nAccount created successfully!\n");
}

// Function to deposit money
void deposit() {
    float amount;

    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    account.balance += amount;

    printf("Amount deposited successfully!\n");
    printf("Current Balance: %.2f\n", account.balance);
}

// Function to withdraw money
void withdraw() {
    float amount;

    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= account.balance) {
        account.balance -= amount;
        printf("Withdrawal successful!\n");
        printf("Remaining Balance: %.2f\n", account.balance);
    } else {
        printf("Insufficient Balance!\n");
    }
}

// Function to display account details
void display() {
    printf("\n----- Account Details -----\n");
    printf("Account Number : %d\n", account.accNo);
    printf("Account Holder : %s\n", account.name);
    printf("Balance        : %.2f\n", account.balance);
}

int main() {
    int choice;

    do {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Thank you for using the Bank Account System!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}