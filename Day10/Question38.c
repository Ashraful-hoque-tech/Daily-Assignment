/*Write a program to print reverse pyramid.
 *********
  *******
   *****
    ***
     * 
 */

 #include <stdio.h>

int main()
{
    int i, j, k, rows = 5;

    for (i = rows; i >= 1; i--)
    {
        // Print leading spaces
        for (j = rows; j > i; j--)
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
  