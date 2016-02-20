/****************************************************************************
 * vigenere.c
 *
 * Maria Mayskaya
 * mashamay@gmail.com
 *
 * Perform vigenere cypher with user defined key
 ***************************************************************************/


#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("wrong key\n");
        return 1;
    }  
    int check = 0;
    while (check < strlen(argv[1]))
    {
        if (!isalpha(argv[1][check]))
        {
            printf("wrong key\n");
            return 1; 
        }
        else 
            check++; 
        }    
    string plaintext = GetString();       
    int vigenere = 0;
    string key = argv[1];
    int j = 0;     
    // perform vigenere cipher
    for (int i = 0, n = strlen(plaintext); i < n; i++)     
    {
        if (isalpha(plaintext[i]))
        {            
            int index = j % strlen(key);
            int code = toupper(key[index]);
            code = code - 65;       
            if (islower(plaintext[i]))
            {
                vigenere = (plaintext[i] - 96 + code) % 26 + 96;
                printf("%c", vigenere);
            }
            else
            {
                vigenere = (plaintext[i] - 64 + code) % 26 + 64;
                printf("%c", vigenere);
            }
            j++;
        }      
        else
        {
            printf("%c", plaintext[i]);
        }    
    }
    printf("\n");
    return 0;                            
}
