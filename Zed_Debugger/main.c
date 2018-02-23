#define DEBUG
#include "dbg.h"
#include <stdio.h>
#include <stdlib.h>

#define DATA_FILE "tt_grid.data"

int main()
{
  FILE* tt_grid;
  tt_grid = fopen(DATA_FILE, "r");

  // Check if file opened successfully
  // Return failed
  if (tt_grid == NULL)
  {
    probe(tt_grid, "File (%s) Cannot Be Opened", tt_grid);
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
