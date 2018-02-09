#include <stdio.h>
#include <stdlib.h>
#define DATA_FILE "times_table.data"

int main(void)
{
  int value;
  FILE* times_table;
  // Check if file opened successfully
  times_table = fopen(DATA_FILE, "r");
  if (times_table == NULL)
  {
    printf("Opening file %s failed\n", DATA_FILE);

    return EXIT_FAILURE;
  }
  //
  while (fscanf(times_table, "%d", &value) == 1) printf("%d\n", value);

  fclose(times_table);
  printf("DONE\n");

  return EXIT_SUCCESS;
}
