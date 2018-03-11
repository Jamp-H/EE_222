#include <stdio.h>
#include <stdlib.h>
#include "encrypt.h"

#include "dbg.h"

#define ORIGINAL  "EncryptionText.txt"
#define ENCRYPTED "EncryptedTextEncrypted.txt"
#define KEY "cynrst"

int main(void) {

    FILE *original, *encrypted;
    char key[] = KEY;
    char encryption_array[5][2] = {{'m', 'a'}, {'l', 'e'}, {'f', 'i'},
     {'s', 'o'}, {'h', 'u'}};
    //printf("Please enter a key: ");
    //scanf("%s", key);

    // open files
    original = fopen(ORIGINAL, "r");
    probe(original, "File %s could not be opened!", ORIGINAL);
    encrypted = fopen(ENCRYPTED, "w");
    probe(original, "File %s could not be opened!", ENCRYPTED);

    // encrypt
    en_crypt(original, encrypted, key);

    // close files
    fclose(original);
    fclose(encrypted);

    return EXIT_SUCCESS;

error:
    return EXIT_FAILURE;
}
