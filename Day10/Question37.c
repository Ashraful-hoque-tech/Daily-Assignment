/*Write a program to print star pyramid
     *
    ***
   *****
  *******
 *********
 */

 #include <stdio.h>

int main()
{
    int i, j, k, rows = 5;

    for (i = 1; i <= rows; i++)
    {
        // Print spaces
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }

        // Print stars
        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}