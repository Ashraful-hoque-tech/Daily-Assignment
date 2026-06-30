// Write a program to Write function for Armstrong.

#include <stdio.h>

// Function to check Armstrong number
int isArmstrong(int n) {
    int temp = n, rem, sum = 0;

    while (temp != 0) {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    return (sum == n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}