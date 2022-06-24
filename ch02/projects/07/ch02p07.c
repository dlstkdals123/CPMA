#include <stdio.h>

int main(void)
{
	int amount_dollar;
	
	printf("Enter a dollar amount: ");
	scanf("%d", &amount_dollar);

	printf("$20 bills : %d\n", amount_dollar / 20);
	amount_dollar -= 20 * (amount_dollar / 20);
	printf("$10 bills : %d\n", amount_dollar / 10);
	amount_dollar -= 10 * (amount_dollar / 10);
	printf(" $5 bills : %d\n", amount_dollar / 5);
	amount_dollar -= 5 * (amount_dollar / 5);
	printf(" $1 bills : %d\n", amount_dollar);
	
	return 0;
}
