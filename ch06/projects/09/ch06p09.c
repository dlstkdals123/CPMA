#include <stdio.h>

int main(void)
{
	float current_loan, interest_rate, monthly_payment;
	int Payments;

	printf("Enter amount of loan : ");
	scanf("%f", &current_loan);
	printf("Enter interest rate : ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment : ");
	scanf("%f", &monthly_payment);
	printf("Enter number of payments: ");
	scanf("%d", &Payments);

	for (int i = 1; i <= Payments; i++) {
		current_loan = current_loan * (1 + interest_rate / 100.0 / 12.0) - monthly_payment;
		printf("Balance remaining after payment %d : $%.2f\n", i, current_loan);
	}

	return 0;
}
