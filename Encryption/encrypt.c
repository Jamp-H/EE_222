#include "encrypt.h"

void en_crypt(FILE* original, FILE* encrypted,char key[])
{
    int i;
    char currentChar;

    char encryption_array[5][2] = {{'m', 'a'}, {'l', 'e'}, {'f', 'i'},
    {'s', 'o'}, {'h', 'u'}};


    en_crypt_init(encryption_array, key);

    while(1)
    {
        printf("Working\n");
        // Read char from original
        currentChar = fgetc(original);
        // if char is end of file break (EOF)
        if (currentChar == EOF)
        {
            break;
        }
        // else encrypt
        for(i=0;i<5;i++)
        {
            // write char into encrypted file
            if (currentChar == encryption_array[i][0])
            {
                currentChar = encryption_array[i][1];
            }
            else if (currentChar == encryption_array[i][1])
            {
                currentChar = encryption_array[i][0];
            }
        }
        fputc(currentChar, encrypted);
    }
    printf("End of function\n" );
}


void en_crypt_init(char encryption_array[6][2], char key[])
{
    int i;
    char currentChar;
    // Replace 1st element in param array with the key array
    for(i=0;i<5;i++)
    {
        encryption_array[i][0] = key[i];
    }
}
