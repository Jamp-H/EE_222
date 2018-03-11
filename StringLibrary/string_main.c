#include <stdio.h>
#include "my_String.h"

#define MAX_STRING_LENGTH 80

int main(void) {

    char string[MAX_STRING_LENGTH];
    char clean_string[MAX_STRING_LENGTH];

    // take a string from the
    printf("Enter a string: ");
    fgets(string, MAX_STRING_LENGTH, stdin);
    // override excess '\n' from fgetc()
    // ...

    // possibly use sscanf() to parse string ...
    // ...

    printf("\nString length is: %d", string_length(string));

    string_truncate(string, clean_string);
    printf("\nTruncated string is (printed with trailing >>><<<) >>>%s<<<", clean_string);
    printf("\n");

    char first[] = "Hi";
    char second[] = "World";
    char result[64];

    string_concat(first, second, result);

    //string_delete_white(first);
    printf("%s\n", result);

    return 0;
}
