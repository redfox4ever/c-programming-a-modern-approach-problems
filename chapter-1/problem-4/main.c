#include <stdio.h>

int main(void)
{
	int a, b, c;
	float x, y, z;

	printf("a: %d, b: %d, c: %d", a, b, c);
        printf(" x: %f, y: %f, z: %f", x, y, z);	
	return 0;
}

// a seems to always contain 100, b 0 ,and c 4096
// as for x, y, and z, two would hold 0 and the rest some random value
