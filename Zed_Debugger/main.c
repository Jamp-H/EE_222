#define DBG
//#define DBG_H_INCLUDED
#include "dbg.h"
#include <stdio.h>
#include <stdlib.h>

#define DATA_FILE "tt_grid.data"
#define DATA ""

int main()
{
  FILE* tt_grid;
  tt_grid = fopen(DATA_FILE , "r");

  // Check if file opened successfully
  // Return failed
  if (tt_grid == NULL)
  {
    //debug("\n\nFile Could Not Be Opened\n");
    probe(tt_grid, "\nFile (%s) Cannot Be Opened", "tt_grid");

  }
  // Default to successful display message
  // Return successful
  else
  {
    debug("File Had Been Opened");
  }
  return EXIT_SUCCESS;

  error: return EXIT_FAILURE;
}
