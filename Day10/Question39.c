/*Write a program to print number pyramid 
     1
    121
   12321
  1234321
 123454321
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

        // Print increasing numbers
        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }

        // Print decreasing numbers
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}