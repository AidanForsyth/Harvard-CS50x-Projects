#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name?\n");       //Creates a variable called "name" of type string. The variabe takes whatever string is inputed into the function get_string
    printf("hello, %s\n", name);        //printf function displays the message to the human, the %s is a place holder for the variable input name. \n means inserting to a new line
}

