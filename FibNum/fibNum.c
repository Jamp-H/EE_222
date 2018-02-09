#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int endingNum, num = 1, fibNumMin = 0, fibNumMax = 1, fibNum = 0;

  printf("Enter a ending value: ");
  scanf("%d", &endingNum);
  printf("%d\n", fibNumMax);
  for (num = 1; num <= endingNum - 1; num++)
  {
    if (endingNum < 3)
    {
      break;
    }
    else
    {
      fibNum = fibNumMin + fibNumMax;
      fibNumMin = fibNumMax;
      fibNumMax = fibNum;
      printf("%i\n", fibNum);
    }
  }
}
