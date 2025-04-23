#include <stdio.h>

#define MONTHS 3
int main(void)
{
	float loan, interest, payment;
	printf("Enter amount of load: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &interest);

	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	for(int i=0; i < MONTHS; i++)
	{
		
	 	loan += loan * (interest / 12.0f) / 100;
		loan -= payment;		
		printf("Balance remaining after payment %i: $%f\n", i+1, loan);  

	}

	return 0;
}
