#include <stdio.h>
int main(void)
{
float far, cel;
printf("Enter a temp in far: ");
scanf("%f", &far);

cel = (far - 32) * (5.0/9.0);

printf("cel: %4.2f\n", cel);
return 0;
}
