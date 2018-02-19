#include <stdio.h>
#include <stdlib.h>
#include "tt.h"
#define DATA_FILE "times_table_B.data"
// Macro Guard
#ifndef TT_H_INCLUDED
#define TT_H_INCLUDED

read_result(FILE* stream, int first, int second);
read_forward(FILE* stream, int number_elements);

#endif

int main(void)
{

}

void read_result(FILE* stream, int first, int second)
{
  int value, position;

  position = (((first-1) *10) + (second - 1));

  fseek(stream,position * sizeof(int),SEEK_SET);
  fread(&value, sizeof(int), 1, stream);

  return value;
}

void read_forward(*FILE stream, int number_elements)
{
  // Read and print out whole table from binary file
  fseek(stream, 0, SEEK_SET);
  while(number_elements--)
  {
    fread()
    fprint()
  }
}
