// Calculates a broker's commission

#include <stdio.h>

int main(void)
{
	int Speed;

	printf("Enter a wind speed in knots: ");
	scanf("%d", &Speed);

	if (Speed < 1) printf("Calm\n");
	else if (Speed <= 3) printf("Light air\n");
	else if (Speed <= 27) printf("Breeze\n");
	else if (Speed <= 47) printf("Gale\n");
	else if (Speed <= 63) printf("Storm\n");
	else printf("Hurricane\n");

	return 0;
}