#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: "); //Prompting the user for Height to create the pyramid.
    } 
    while (n < 1 || n > 8); //Condition to validate input
    for (int f = 1; f <= n; f++) //Loop used to create rows
    {
        for (int c = 0; c < n; c++) //Loop used to create left pyramid
        {
            if (c < n - f)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        for (int c = n + 1; c < n + 3; c++) //Loop used to create space between pyramids
        {
            printf(" ");
        }
        for (int c = n + 3; c <= 2 * n + 2; c++) //Loop used to create right pyramid
        {
            if (c > 2 * n - ((n - 2) - f) && c <= 2 * n + 2)
            {
                printf("");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    } 
}

