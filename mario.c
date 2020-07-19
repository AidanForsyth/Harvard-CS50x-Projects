/*
Aidan Forsyth
Creating mario blocks in C
CS50x
*/
#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int n, k = 0;
    do
    {
        n = get_int("Height: ");
    }
    while ((n < 1) || (n > 8));  //condition that will reject heights not included in the specified range
    for (int i = 1; i <= n; ++i, k = 0)
    {
       for (int spaces = (n-i); spaces > 0; spaces--) //adds the spaces for the left block
       {
           printf(" ");
       }
       
       for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        
        printf("  "); //this creates the gap
        
        for (int j = 1; j <= i; j++) //creates the second block
        {
            printf("#");
        }
        
        printf("\n");
    }
    return 0; //indicates sucess and completion of function
}