//function prototype declaration
#include <stdio.h>
#include "circum.h"

float get_circumference(float diameter);

int main(void)
{
	float diameter = 0;
	printf("Please put in diameter: ");
	scanf("%f", &diameter);
	printf("Circumference is: %f \n", get_circumference(diameter));
	return 0;
}

float get_circumference(float diameter)
{
return PI*diameter;
}
