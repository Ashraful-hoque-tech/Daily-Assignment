//Write a program to Find string length  without strlen().

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop until null character is found
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of string: %d", length);

    return 0;
}