#include <stdio.h>

#define PI 3.14159265359

int main(void)
{
	float r = 10.0f;
	float volume = 4.0f / 3.0f * PI * r * r * r;
	
	printf("The volume of a sphere with a radius equal to %f is : %f", r, volume);

	return 0;
}
