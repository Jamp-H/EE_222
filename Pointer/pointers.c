#include "pointers.h"

void swap(int* ptr_a, int* ptr_b) {
    int aux;
    // Swaps two numbers
    aux = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = aux;
}

void reorder(int* ptr_a, int* ptr_b, int* ptr_c)
{
    // Orders numbers from greatest to least
    if (*ptr_a < *ptr_b)
    {
        swap(ptr_a,ptr_b); 
    }
    if(*ptr_a < *ptr_c)
    {
        swap(ptr_a,ptr_c);
    }
    if (*ptr_b < *ptr_c) {
        swap(ptr_b,ptr_c);
    }
}

int string_length(char* char_ptr)
{
    int i=0;
    //Finds Length of a string
    while(*(char_ptr + i)) i++;

    return i;
}

char* string_concat(char* str1, char* str2)
{
    int i=0,j=0;

    // Allocate memory for char pointer for string array
    char* str3_ptr = (char*) malloc( sizeof(char) *(string_length(str1)
                                                        + string_length(str2)));

    // Add first string to new string
    while(*(str1+i))
    {
        *(str3_ptr+i) = *(str1+i);
        i++;
    }

    // Add second string to thrid string
    while(*(str2+j))
    {
        *(str3_ptr+i) = *(str2+j);
        i++, j++;
    }

    // Add null terminator to end of the thrid string
    *(str3_ptr+i) = '\0';

    return str3_ptr;
}
