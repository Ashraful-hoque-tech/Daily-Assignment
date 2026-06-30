/*Write a program to print hollow square pattern .
*****
*   *
*   *
*   *
*****
*/

#include <stdio.h>

int main()
{
    int i, j, rows = 5;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            // Print stars only on boundary
            if (i == 1 || i == rows || j == 1 || j == rows)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}