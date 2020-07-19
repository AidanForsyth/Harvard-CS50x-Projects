#include <cs50.h>
#include <stdio.h>
#include <math.h> //importing math library for "round" function 

int main(void)
{
    float dollars = 0;
    int cents = 0;
    do
    {
        dollars = get_float("What is the dollar amount owed? "); //asks the user to input the dollar amount owed 
        cents = round(dollars * 100); //converts the dollar amount owed into cents owed
    }
    while(cents < 0);
    
    int num_coins = 0;
    
    while(cents >= 25)
    {
        cents = cents - 25;
        num_coins++;
    }
    
    while((cents >= 10) && (cents < 25))
    {
        cents = cents - 10;
        num_coins++;
    }
    
    while((cents >= 5) && (cents < 10))
    {
        cents = cents - 5;
        num_coins++;
    }
    
    while((cents >= 1) && (cents < 5))
    {
        cents = cents - 1;
        num_coins++;
    }
    printf("The minimum number of coins is: %i\n", num_coins);
    return 0;
}