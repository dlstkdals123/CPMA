#include <stdio.h>

int main(void)
{
	float x, Max = 0.0f;
	
	do {
		printf("Enter a number : ");
		scanf("%f", &x);
		if (x > Max) Max = x;
	} while (x > 0);

	printf("\nThe Largest number entered was %.2f\n", Max);

	return 0;
}
