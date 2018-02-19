#include <stdio.h>
#include <stdlib.h>
#define DATA_FILE "times_table_grid.data"

void fprint_line(FILE*  stream, int length);

int main(void)
{
  int i,j,comb;
  FILE* times_table_grid;


  // Open file & write to it
  times_table_grid = fopen(DATA_FILE, "w");
  // Check if file was opened successfully
  if (times_table_grid == NULL)
  {
    printf("Opening file %s failed\n", DATA_FILE);

    return EXIT_FAILURE;
  }
  //use two nested loop running 1-10
  for (i = 1; i<=10; i++)
  {
    fprint_line(times_table_grid,40);
    //fprint_line(times_table_grid, 51);
    for (j = 1; j<=10; j++)
    {
      comb = i*j;
      fprintf(times_table_grid, "|%3d", comb);
      printf("|%3d", comb);
    }
    printf("|");
    fprintf(times_table_grid, "|");
    fprintf(times_table_grid, "%s", "\n");
    printf("\n");
    //fprint_line(times_table_gridT, 51);
  }

  fclose(times_table_grid);

}

void fprint_line(FILE* stream, int length)
{
  int i;
  for ( i = 0; i <=length; i++)
  {
    fprintf(stream, "-");
    printf("-");
  }
  fprintf(stream, "\n");
  printf("\n");
}
