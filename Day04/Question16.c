// Write a program to print Armstrong numbers in a range .

#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, remainder, digits;
    double sum;

    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        temp = num;
        digits = 0;
        sum = 0;

        // Count digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        // Calculate sum of digits raised to the power of digits
        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        // Handle 0 as an Armstrong number
        if (num == 0)
            sum = 0;

        if ((int)sum == num)
            printf("%d ", num);
    }

    return 0;
}