#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <stdio.h>
void en_crypt(FILE* original, FILE* encrypted, char key[]);
void en_crypt_init(char encryption_array[6][2], char key[]);

#endif
