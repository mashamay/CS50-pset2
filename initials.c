/****************************************************************************
 * initials.c
 *
 * Maria Mayskaya
 * mashamay@gmail.com
 *
 * Prints initials
 ***************************************************************************/

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    // get a user name
    string name = GetString(); 
    
    if (name != NULL)
    {

        // print first initial
        printf("%c", toupper(name[0]));
            
        // print other initials            
        for (int i = 0, n = strlen(name); i < n; i++)
        {    
            if (name[i] == ' ')
            {  
                printf("%c", toupper(name[i + 1]));
            }   
        }
        printf("\n");   
    }
}
