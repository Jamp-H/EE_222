#include <stdio.h>
#include <stdlib.h>
// Define Min and MAX values
#define MIN 1
#define MAX 1000

int main(void)
{
  int midNum, min, max, i;
  char ans;

  midNum = MAX/2;
  min = MIN;
  max = MAX;

  while(midNum != max || midNum != min || min != max)
  {
    printf("Is your number greater than %d(y/n)? ", midNum);
    scanf("%c", &ans); getchar();
    switch(ans)
    {
      case 'y':
        min = midNum;
        if (midNum < max)
        {
          midNum = (midNum + max) / 2;
        }
        else
        {
          printf("Your number is : %i\n", midNum);
          return 0;
        }
        printf("%d\n", midNum);
        break;
      case 'n':
        max = midNum;
        if (midNum > min)
        {
          midNum = (max + min)/2;
        }
        else
        {
          printf("Your number is : %i\n", midNum);
          return 0;
        }
        printf("%d\n", midNum);
        break;
      default:
      printf("Enter a valid charecter(y/n): ");
      scanf("%c", &ans); getchar();
    }

  }
}
