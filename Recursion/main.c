#include "fib.h"
#include <stdio.h>
// Use debug macro

int main(void)
{
  int result, value;
  printf("Enter a value: ");
  scanf("%d", &value);

  result = fib(value);
  
  printf("%d\n", result);

}
