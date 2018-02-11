#include <stdio.h>
#include <stdlib.h>
// Define Min and MAX values
#define MIN 1
#define MAX 1000

int main(void)
{
  int midNum, min, max, i;
  char ans;

  // set defined values to changeable ones
  min = MIN;
  max = MAX;

  while(midNum < max || midNum > min)
  {
    // Get half total value
    midNum = (max+min)/2;
    // Display current guess to the user
    printf("Is your number greater than %d(y/n)? ", midNum);
    scanf("%c", &ans); getchar();
    switch(ans)
    {
      // if guess is to high
      case 'y':
        if (midNum < max)
        {
          // reset min value to 1 more than current guess
          min = midNum + 1;
        }
        break;
      // if guess is to low
      case 'n':
        if (midNum > min)
        {
          // set max to guess
          max = midNum;
        }
        break;
      default:
      printf("Enter a valid charecter(y/n): ");
      scanf("%c", &ans); getchar();
    }
  }
  // Print out correct number
  printf("Your Number Is %d\n", midNum);
  return 0;
}
