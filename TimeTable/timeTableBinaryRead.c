#include <stdio.h>
#include <stdlib.h>
//#define DATA_FILE "times_table.binary.data"

int read_result(FILE* stream, int first, int second);

int main(void)
{
  int first, second;
  FILE* stream = fopen("times_table_B.data", "r");
  printf("Enter a times table equation: ");
  scanf("%d * %d", &first, &second);
  printf("%d * %d = %d\n", first, second, read_result(stream, first, second));
  fclose(stream);
}

int read_result(FILE* stream, int first, int second)
{
  int value, position;

  position = (((first-1) *10) + (second - 1));

  fseek(stream,position * sizeof(int),SEEK_SET);
  fread(&value, sizeof(int), 1, stream);

  return value;
}
