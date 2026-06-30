// Write a program to check perfect number .
/* A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding the number itself).
For example:
6 = 1 + 2 + 3 → Perfect Number */

#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}