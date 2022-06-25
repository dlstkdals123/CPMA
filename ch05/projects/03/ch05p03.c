// Calculates a broker's commission

#include <stdio.h>

int main(void)
{
	int Share;
	float PricePerShare, Value, OriginalCommission, RivalCommission;

	printf("Enter number of shares : ");
	scanf("%f", &Share);
	printf("Enter price per share : ");
	scanf("%f", &PricePerShare);
	Value = Share * PricePerShare;

	if (Value < 2500.00f)
		OriginalCommission = 30.00f + .017f * Value;
	else if (Value < 6250.00f)
		OriginalCommission = 56.00f + .0066f * Value;
	else if (Value < 20000.00f)
		OriginalCommission = 76.00f + 0.0034f * Value;
	else if (Value < 50000.00f)
		OriginalCommission = 100.00f + 0.0022f * Value;
	else if (Value < 500000.00f)
		OriginalCommission = 155.00f + 0.0011f * Value;
	else
		OriginalCommission = 255.00f + 0.0009f * Value;

	if (OriginalCommission < 39.00f)
		OriginalCommission = 39.00f;

	if (Share < 2000) RivalCommission = 33.00f + 0.03f * Share;
	else RivalCommission = 33.00f + 0.02f * Share;

	printf("Commission charged by the original broker : $%.2f\n", OriginalCommission);
	printf("Commission charged by the rival broker : $%.2f\n", RivalCommission);

	return 0;
}