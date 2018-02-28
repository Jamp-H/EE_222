#include "tt.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int tt[10][10];
  int first, second;

  tt_init(tt);
  printf("\n Initilized ...\n\n");

  tt_print(tt);


  printf("Enter the product, e.g. 5 * 4: " );
  scanf("%d * %d", &first, &second);
  printf("%d * %d = %d\n\n", first, second, tt_result(tt, first, second));

  return EXIT_SUCCESS;
}
