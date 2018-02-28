#include "fibonacci.h"
#include <stdio.h>

int main(void)
{
  int result, value;
  printf("Enter a value: ");
  scanf("%d", &value);

  result = fib(value);
  

  printf("%d\n", result);

}
