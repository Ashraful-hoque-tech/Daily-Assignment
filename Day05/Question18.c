// Write a program to check strong number .
/*A Strong Number is a number whose sum of the factorials of its digits equals the number itself.
Example:
145 = 1! + 4! + 5!
145 = 1 + 24 + 120 = 145
Therefore, 145 is a Strong Number.*/

#include <stdio.h>

int main() {
    int num, temp, remainder;
    int sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        remainder = temp % 10;

        fact = 1;
        for (i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}