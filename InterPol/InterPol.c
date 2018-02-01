#include <stdio.h>
int main(void)
{
// Initiate variables
float x, x1, y1, x2, y2, y;

// Promp user for input
printf("Enter x1, y1, x2, y2, x respectively: ");
scanf("%f, %f, %f, %f, %f", &x1, &y1, &x2, &y2, &x);

// Formula for y
y = ((x - x1)/(x2 - x1)) * (y2 - y1) + y1;

// Display result
printf("y = %f\n", y);
return 0;
}
