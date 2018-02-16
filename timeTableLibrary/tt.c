#include <stdio.h>
#include <stdlib.h>
// Macro Guard
#ifndef TT_H_INCLUDED
#define TT_H_INCLUDED

read_result(FILE* stream, int first, int second);
read_forward(FILE* stream, int number_elements);

#endif

int main(void)
{

}

void read_forward(*FILE stream, int number_elements)
{
  fseek(stream, 0, SEEK_SET);
  while(number_elements--)
  {
    
  }
}
