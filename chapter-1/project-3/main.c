#include <stdio.h>

#define PI 3.147

int main(void)
{


	float r;
	printf("Enter the radius of the sphere: ");
        scanf("%f", &r);

	float volume = 4.0f / 3.0f * PI * r * r * r;
	
	printf("The volume of a sphere with a radius equal to %f is : %f\n", r, volume);

	return 0;
}
