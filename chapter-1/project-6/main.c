#include <stdio.h>

int power(int x, int y)
{
	int result = 1;
	for(int i=0; i<y; i++)
		result *= x;
	return result;
}

int main(void)
{
	float x, result;
	
	printf("Enter a value for the variable x : ");
	scanf("%f", &x);

	result = ( ( ( ( 3 * x + 2 ) * x - 5 ) * x - 1 ) * x + 7 ) * x - 6;
	printf("The result is %.2f\n", result); 

	return 0;
}
