#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ask for a positive integer in the command line
int main(int argc, string argv[])
{
    //command line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //get plaintext
    string plaintext = get_string("Plaintext: ");

    //encrypt the plaintext
    int i; 
    int n = strlen(plaintext);
    int key = atoi(argv[1]);
    printf("ciphertext: ");
    for (i = 0; i < n; i++)
    {
        //uppercase letters 
        if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            int uppercase = (int) plaintext[i] + (key % 26);
            if (uppercase > 90)
            {
                uppercase = uppercase - 26;
                printf("%c", (char) uppercase);
            }
            else 
            {
                printf("%c", (char) uppercase);
            }
        }
        
        //lowercase letters 
        else if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            int lowercase = (int) plaintext[i] + (key % 26);
            if (lowercase > 122)
            {
                lowercase = lowercase - 26;
                printf("%c", (char) lowercase);
            }
            else 
            {
                printf("%c", (char) lowercase); 
            }
        }
        //everything else 
        else 
        {
            printf("%c", plaintext[i]);
        }
    }
    
    printf("\n");

}
