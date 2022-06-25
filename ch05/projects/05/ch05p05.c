// Calculates a broker's commission

#include <stdio.h>

int main(void)
{
	int Income;
	float Tax;

	printf("Enter taxable income : ");
	scanf("%d", &Income);

	if (Income < 750) Tax = 0.01f * Income;
	else if (Income <= 2250) Tax = 7.50f + 0.02f * (Income - 750);
	else if (Income <= 3750) Tax = 37.50f + 0.03f * (Income - 2250);
	else if (Income <= 5250) Tax = 82.50f + 0.04f * (Income - 3750);
	else if (Income <= 7000) Tax = 142.50f + 0.05f * (Income - 5250);
	else Tax = 230.00f + 0.06f * (Income - 7000);

	printf("Tax due : $%.2f", Tax);

	return 0;
}