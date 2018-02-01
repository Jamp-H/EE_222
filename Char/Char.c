#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char letter;

while(letter != 'q')
{
  printf("Enter a letter A-F or q to quit: ");
  scanf("%c", &letter); getchar();
  switch(letter)
  {
    case 'A':
    printf("Very Good!\n");
    break;
    case 'B':
    printf("Good!\n");
    break;
    case 'C':
    printf("Okay.\n");
    break;
    case 'D':
    case 'F':
    printf("Doomed!\n");
    break;
    case 'q':
    break;
    break;
    default:
    printf("Enter a valid charecter: ");
    scanf("%c", &letter); getchar();
  }

}
return 0;

}
