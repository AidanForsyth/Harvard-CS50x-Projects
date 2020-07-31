#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[]) //set up for command line arguments
{
    if (argc != 2)
    {
        printf("Usage: ./ceaser key\n");
        return 1;
    }
    
    for (int i = 0, n = strlen(argv[1]); i < n; i++) //cycles through each inputed "key" character 
    {
        if (isdigit(argv[1][i]) == 0) //this will cycle through the inputed key to check if all characters are digits (0-9)
        {
            printf("Usage: ./ceaser key\n");
            return 1; 
        }
    }
    //printf("Success\n");
    int key = atoi(argv[1]); //atoi converts the string into a integer
    printf("%i\n", key);
    string plaintext = get_string("Plaintext: "); //gets the users input for what they want the key to be 
    
    printf("ciphertext: ");
    for (int j = 0, p = strlen(plaintext); j < p; j++) // this is a way to cycle through each individual character in the "plaintext"
    {
        if (isupper(plaintext[j])) //checks if character is upper case 
        {
            printf("%c", ((((plaintext[j] - 65) + key) % 26) + 65));
        }
        else if (islower(plaintext[j])) //checks if character is lower case
        {
            printf("%c", ((((plaintext[j] - 97) + key) % 26) + 97));
        }
        else //accounts for any special characters (coma, spaces, etc.)
        {
            printf("%c", plaintext[j]);
        }
    }
    printf("\n");
    return 0;
}