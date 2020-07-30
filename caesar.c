#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./ceaser key\n");
        return 1;
    }
    
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./ceaser key\n");
            return 1; 
        }
    }
    //printf("Success\n");
    int key = atoi(argv[1]);
    printf("%i\n", key);
    string plaintext = get_string("Plaintext: ");
    
    
    for (int j = 0, p = strlen(plaintext); j < p; j++)
    {
        if (isupper(plaintext[j]))
        {
            printf("%c", ((((plaintext[j] - 65) + key) % 26) + 65));
        }
        else if (islower(plaintext[j]))
        {
            printf("%c", ((((plaintext[j] - 97) + key) % 26) + 97));
        }
    }
    //printf("\n");
}