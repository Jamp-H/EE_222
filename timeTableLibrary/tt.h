#include<stdio.h>
#ifndef TT_H_INCLUDED
#define TT_H_INCLUDED

void read_forward(FILE* stream, int number_elements);
int read_result(FILE* stream, int first, int second);
void read_backwards(FILE* stream, int number_element);
void read_odd(FILE* stream, int number_elements);
void read_even(FILE* stream, int number_elements);

#endif
