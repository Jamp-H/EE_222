#include "fibonacci.h"
#include <stdio.h>
#include <stdlib.h>

int fib(int val)
{
  int value;
  if (val == 0)
  {
    return 0;
  }
  if (val == 1)
  {
    return 1;
  }

  value =  fib(val-1) + fib(val-2);
  return value;
}
