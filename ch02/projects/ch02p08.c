#include <stdio.h>

int main(void)
{
	float current_loan, interest_rate, monthly_payment;

	printf("Enter amount of loan : ");
	scanf("%f", &current_loan);
	printf("Enter interest rate : ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment : ");
	scanf("%f", &monthly_payment);

	current_loan = current_loan * (1 + interest_rate / 100.0 / 12.0) - monthly_payment;
	printf("Balance remaining after first payment : $%.2f\n", current_loan);
	current_loan = current_loan * (1 + interest_rate / 100.0 / 12.0) - monthly_payment;
	printf("Balance remaining after second payment : $%.2f\n", current_loan);
	current_loan = current_loan * (1 + interest_rate / 100.0 / 12.0) - monthly_payment;
	printf("Balance remaining after third payment : $%.2f\n", current_loan);

	return 0;
}
