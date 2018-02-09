#import <stdio.h>
#define MAX 30

int main(void)
{
  int startingA = 0, a = 0, count = 0;
    // Set loop to run 30x
    //Do until a = 1
    for (startingA = 1; startingA <= MAX; startingA++)
    {
        count = 0;
        a = startingA;
          while (a != 1)
          {
            //Algorithm = A / 2 even
            while (a % 2 != 0)
            {
              a = (3*a) + 1;
              count++;
            }
            //Algorithm = 3A +1 odd
            while (a % 2 == 0)
            {
              a /= 2;
              count++;
            }
          }
       // Display Output
       printf("%d - %d.\n", startingA, count);
    }
    return 0;
}
