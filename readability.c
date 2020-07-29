#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    string s = get_string("Text: ");
    
    int n = 0;
    int letter = 0;
    int word = 1;
    int sentence = 0;
    
    while (s[n] != '\0')
    {
        if ((s[n] >= 'a' && s[n] <= 'z') || (s[n] >= 'A' && s[n] <= 'Z'))
        {
            letter++;
        }
        else if (s[n] == ' ')
        {
            word++;
        }
        else if ((s[n] == '.') || (s[n] == '!') || (s[n] == '?'))
        {
            sentence++;
        }
        n++;
    }   
    
    float conversion = 100 / (float) word;
    float L = conversion * (float) letter;
    float S = conversion * (float) sentence;
    
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 1 && index < 16)
    {
        printf("Grade %i\n", index);
    }
    else 
    {
        printf("Grade 16+\n");
    }
    
    /*
    printf("Letter(s): %i\n ", i);
    printf("Word(s): %i\n", h);
    printf("Sentence(s): %i\n", k);
    printf("Grade")
    */
    
    return 0;
}