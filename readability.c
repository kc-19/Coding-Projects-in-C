#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int analyze_text(string text);

int letters = 0;
int words = 0;
int sentences = 0;

int main(void)
{
    //Get user input (text for reading level)
    string text = get_string("Text: ");

    //Find the number of letters, words, and sentences
    int analyze = analyze_text(text);

    //Calculate the reading level
    float gradelevel = (0.0588 * (letters * 100) / words) - (0.296 * (sentences * 100) / words) - 15.8;
    //Round to the nearest whole number
    int gradeprint = round(gradelevel);
    //The output for grade 16+ and 1-
    //Display the reading level
    if (gradeprint >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (gradeprint < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", gradeprint); 
    }
}

int analyze_text(string text)
{
    int n = strlen(text);
    for (int i = 0; i < n; i++)
    {
        //Find the number of letters
        if (text[i] >= 'a' && text[i] <= 'z') 
        {
            letters++;
        }
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            letters++;
        }
        //Find the number of words
        if (text[i] == ' ')
        {
            words++;
        }
        //Find the number of sentences
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    words = words + 1;
    return 0; 
}
