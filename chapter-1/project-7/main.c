#include <stdio.h>

int main(void)
{
	int amount_left;
	int bills_of_twenty, bills_of_ten, bills_of_five, bills_of_one;
	printf("Enter a dollar amount: ");
	scanf("%d", &amount_left);
	
	
	bills_of_twenty = amount_left / 20;
	amount_left -= bills_of_twenty * 20;

	bills_of_ten = amount_left / 10;
	amount_left -= bills_of_ten * 10;

	bills_of_five = amount_left / 5;
	amount_left -= bills_of_five * 5;

	bills_of_one = amount_left;


	printf("$20 bills: %d \n", bills_of_twenty);
	printf("$10 bills: %d \n", bills_of_ten);
	printf("$5 bills: %d \n", bills_of_five);
	printf("$1 bills: %d \n", bills_of_one);




	return 0;
}
