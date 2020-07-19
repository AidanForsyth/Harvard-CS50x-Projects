#include <stdio.h>
#include <cs50.h>



int main(void)
{
    int n, k = 0;
    do
    {
        n = get_int("Height: ");
    }
    while ((n < 1) || (n > 8));
    for (int i = 1; i <= n; ++i, k = 0)
    {
       for (int spaces = (n-i); spaces > 0; spaces--)
       {
           printf(" ");
       }
       
       for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        
        printf("  ");
        
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    return 0;
}