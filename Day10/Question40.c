/*
Write a program to print character pyramid.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

#include <stdio.h>

int main()
{
    int i, j, k, rows = 5;

    for (i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }

        // Print increasing characters
        for (k = 0; k < i; k++)
        {
            printf("%c", 'A' + k);
        }

        // Print decreasing characters
        for (k = i - 2; k >= 0; k--)
        {
            printf("%c", 'A' + k);
        }

        printf("\n");
    }

    return 0;
}