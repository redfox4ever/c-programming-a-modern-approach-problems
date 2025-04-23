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
	int x, result;
	
	printf("Enter a value for the variable x : ");
	scanf("%d", &x);

	result = 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) + 7 * x - 6;
	printf("The result is %d\n", result); 

	return 0;
}
