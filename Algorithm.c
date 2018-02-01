#import <stdio.h>

int main(void)
{
  //Algorithm = 3A +1 odd
  //Algorithm = A / 2 even
  //Do until a = 1
  int startingA, a, count = 0;

  printf("Enter a number: ");
  scanf("%d", &startingA);
  a = startingA;
  while (a != 1)
  {
    while (a % 2 != 0)
    {
      a = (3*a) + 1;
      count++;
    }
    while (a % 2 == 0)
    {
      a /= 2;
      count++;
    }
  }
  printf("%d took %d times to get to 1.\n", startingA, count);

}
