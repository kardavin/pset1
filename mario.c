#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        
        //Creates variable for number of rows
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    for (int i = 0; i < n; i++)
    {
        //Creates the spaces before the first "#" in each row
        for (int j = n; j > i + 1; j--)
        {
            printf(" ");
        }
        
        //Creates the "#"s in each row
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        
        //Creates the spaces in between the two sets of stairs
        printf("  ");
        
        //Creates the second set of "#"s for the second set of stairs in each row
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        
        //Moves onto the next row
        printf("\n");
    }
}