#include <stdio.h>

int main(void)
{
	float x, max = 0.0f;
	
	do {
		printf("Enter a number : ");
		scanf("%f", &x);
		if (x > max) max = x;
	} while (x > 0);

	printf("\nThe Largest number entered was %.2f\n", max);

	return 0;
}
