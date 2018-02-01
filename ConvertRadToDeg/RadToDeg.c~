#include <stdio.h>
#define PI 3.1415

int main(void)
{
//Initilize Variables
float rad, deg;
//Promp User For Radian

printf("Enter Radian: ");
scanf("%f", &rad);

// Check user's value between 0 and 2PI
if (rad < 0 || (rad > (2*PI)) )
{
do
{

printf("Invalid Input\n");
printf("Enter radian between 0 and 2*PI: ");
scanf("%f", &rad);
}
while(rad < 0 || rad > (2*PI));
}

// Calculate degrees
deg = (rad * 180) / PI;

// Display Degree
printf("Degree = %f\n", deg);
return 0;
}
