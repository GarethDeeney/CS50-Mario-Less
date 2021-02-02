#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // Creation of variable for later in code.
    int n;
    // Checks valid number is entered by User.
    do
    {
        n = get_int("Height: ");
    }
    while (n > 8 || n < 1);
    // For loop to iterate over the rows decied by the height
    for (int i = 0; i < n; i++)
    {

        // for loop iterates to create spaces for right hand aligned tower
        for (int k = 0; k < n - i - 1; k++)
        {
            printf(" ");
        }
        // for loop iterates to create hashes for tower
        for (int j = -1; j < i; j++)
        {

            printf("#");
        }

        printf("\n");

    }
}
