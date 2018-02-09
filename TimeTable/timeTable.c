#include <stdio.h>
#include <stdlib.h>
#define DATA_FILE "times_table.data"

int main(void)
{

  int i,j,comb;
  FILE* times_table;

  // Open file & write to it
  times_table = fopen(DATA_FILE, "w");
  // Check if file was opened successfully
  if (times_table == NULL)
  {
    printf("Opening file %s failed\n", DATA_FILE);

    return EXIT_FAILURE;
  }
  //use two nested loop running 1-10
  for (i = 1; i<=10; i++)
  {
    for (size_t i = 1; i < 60; i++)
    {
      printf("-");
      fprintf(times_table, "-");
    }
      printf("\n");
      fprintf(times_table, "\n");
    for (j = 1; j<=10; j++)
    {
      comb = i*j;
      fprintf(times_table, "|%4d|", comb);
      printf("|%4d|", comb);
    }
    fprintf(times_table, "%s", "\n");
    printf("\n");
  }
  for (size_t i = 1; i < 60; i++)
  {
    printf("-");
    fprintf(times_table, "-");
  }
    printf("\n");
    fprintf(times_table, "\n");

  fclose(times_table);
  return 0;
}
