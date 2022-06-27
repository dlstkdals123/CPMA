// Calculates a broker's commission

#include <stdio.h>

int main(void)
{
	int share;
	float pricePerShare, value, originalCommission, rivalCommission;

	printf("Enter number of shares : ");
	scanf("%f", &share);
	printf("Enter price per share : ");
	scanf("%f", &pricePerShare);
	value = share * pricePerShare;

	if (value < 2500.00f)
		originalCommission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		originalCommission = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		originalCommission = 76.00f + 0.0034f * value;
	else if (value < 50000.00f)
		originalCommission = 100.00f + 0.0022f * value;
	else if (value < 500000.00f)
		originalCommission = 155.00f + 0.0011f * value;
	else
		originalCommission = 255.00f + 0.0009f * value;

	if (originalCommission < 39.00f)
		originalCommission = 39.00f;

	if (Share < 2000) rivalCommission = 33.00f + 0.03f * share;
	else rivalCommission = 33.00f + 0.02f * share;

	printf("Commission charged by the original broker : $%.2f\n", originalCommission);
	printf("Commission charged by the rival broker : $%.2f\n", rivalCommission);

	return 0;
}
