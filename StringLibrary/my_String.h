#ifndef MY_STRING_H_INCLUDED
#define MY_STRING_H_INCLUDED

int string_length(char string[]);
void string_truncate(char string[], char clean_string[]);
void string_concat(char first[], char second[], char result[]);
void string_delete_white(char string[]);
void string_clean_white(char string[]);

#endif
