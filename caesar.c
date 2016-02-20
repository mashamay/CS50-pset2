/****************************************************************************
 * initials.c
 *
 * Maria Mayskaya
 * mashamay@gmail.com
 *
 * Perform caesar cypher with user defined key
 ***************************************************************************/


#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int k = atoi(argv[1]);
        if (k < 0)
        {
            return 1;
        }
        else
        {
            string input = GetString();
            for (int i = 0, n = strlen(input); i < n; i++)
            {
                // perform caesar cipher
                int caesar = 0;
                if (input[i] >= 'a' && input[i] <= 'z')
                {
                    caesar = (input[i] - 96 + k) % 26 + 96;
                    printf("%c", caesar);
                }
                else if (input[i] >= 'A' && input[i] <= 'Z')
                {
                    caesar = (input[i] - 64 + k) % 26 + 64;
                    printf("%c", caesar);
                }
                else
                {
                    printf("%c", input[i]);
                }    
            }
            printf("\n");
            return 0;  
        }
     }
    else
    {
        printf("Restart the program and enter a positive key\n");
        return 1;
    }
}
