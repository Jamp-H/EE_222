#include "tt.h"
#include <stdio.h>
#define DATA_FILE "tt_binary.data"
#define NUM_ELEM 20


int main(void)
{
  FILE* bianary_tt = fopen(DATA_FILE, "r");
  int val = read_result(bianary_tt, 4, 3);
  printf("%d\n", val);

  // Function Calls

  read_forward(bianary_tt, NUM_ELEM);
  read_backwards(bianary_tt, NUM_ELEM);
  read_odd(bianary_tt, NUM_ELEM);
  read_even(bianary_tt, NUM_ELEM);
}
