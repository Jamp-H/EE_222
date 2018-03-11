#define DBG
#include "dbg.h"
#include "fibonacci.h"
#include <stdio.h>
#include <stdlib.h>


int fib(int val)
{
  int value;
  // Set initial conditions
  if (val == 0)
  {
    return 0;
  }
  if (val == 1)
  {
    return 1;
  }

  // Debug
  debug("Fib Num: %d \n\n", fib(val-1) + fib(val-2));
  // Call fib function recurrsively
  value =  fib(val-1) + fib(val-2);
  return value;
}
