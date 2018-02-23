#include <stdio.h>
#include <stdlib.h>
#include "tt.h"
#define DATA_FILE "tt_binary.data"





int read_result(FILE* stream, int first, int second)
{
  int value, position;
  printf("Reading Result ...\n");
  position = (((first-1) *10) + (second - 1));

  fseek(stream,position * sizeof(int),SEEK_SET);
  fread(&value, sizeof(int), 1, stream);

  return value;
}

void read_forward(FILE* stream, int number_elements)
{
  int value;
  printf("Reading Forward ...\n");
  // Read and print out whole table from binary file
  fseek(stream, 0, SEEK_SET);
  while(number_elements--)
  {
    fread(&value, sizeof(int), 1,stream);
    printf("%d ", value);
  }
  printf("\n");
}

void read_odd(FILE* stream, int number_elements)
{
  int value;
  printf("Reading Odd ...\n");
  // Read and print out whole table from binary file
  fseek(stream, 0, SEEK_SET);
  while(number_elements--)
  {
    fread(&value, sizeof(int), 1,stream);
    printf("%d ", value);
    fseek(stream, sizeof(int), SEEK_CUR);
  }
  printf("\n");
}

void read_even(FILE* stream, int number_elements)
{
  int value;
  printf("Reading Even ...\n");
  // Read and print out whole table from binary file
  fseek(stream, sizeof(int), SEEK_SET);
  while(number_elements--)
  {
    fread(&value, sizeof(int), 1,stream);
    printf("%d ", value);
    fseek(stream, sizeof(int), SEEK_CUR);
  }
  printf("\n");
}


void read_backwards(FILE* stream, int number_elements)
{
  int value;
  printf("Reading Backwards ...\n");
  // Set pointer to beginning
  fseek(stream, 0, SEEK_SET);
  // Set pointer to end of file
  fseek(stream, -sizeof(int), SEEK_END);
  while(number_elements--)
  {
    fread(&value, sizeof(int), 1,stream);
    printf("%d ", value);
    // Negate fread
    fseek(stream, -sizeof(int)*2, SEEK_CUR);
  }
  printf("\n");
}
