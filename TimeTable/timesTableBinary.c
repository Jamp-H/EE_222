#include <stdio.h>
#include <stdlib.h>
#define DATA_FILE "times_table.binary.data"

int main(void){
  int i, j, result;
  FILE* times_table;

  times_table = fopen(DATA_FILE, "w");
  // Check if file was opened successfully
  if (times_table == NULL)
  {
    printf("Opening file %s failed\n", DATA_FILE);

    return EXIT_FAILURE;
  }

  for (i = 1; i <= 10; i++)
  {
    for (j = 1; j <= 10; j++)
    {
      result = i*j;
      fwrite(&result, sizeof(int), 1, times_table);
    }

  }
  return EXIT_SUCCESS;
}
