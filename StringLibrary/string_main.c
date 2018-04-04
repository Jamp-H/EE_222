#include <stdio.h>
#include "my_String.h"

#define MAX_STRING_LENGTH 80
//#define TEST_STRING "  \t a\n\nb \t c\n\t "

int main(void) {

    char string[MAX_STRING_LENGTH];
    char clean_string[MAX_STRING_LENGTH];
    char TEST_STRING[] = "  \t a\n\nb \t c\n\t ";
    // take a string from the

    // override excess '\n' from fgetc()
    // ...

    // possibly use sscanf() to parse string ...
    // ...

    string_truncate(TEST_STRING, clean_string);
    printf("\nTruncated string is (printed with trailing >>><<<) >>>%s<<<", clean_string);
    printf("\n");

    string_clean_white(TEST_STRING);

    printf("String Clean White: %s\n", TEST_STRING);

    string_delete_white(TEST_STRING);

    printf("String Delete White: %s\n", TEST_STRING);

    return 0;
}
