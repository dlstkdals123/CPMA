#include <stdio.h>

int main(void)
{
	float e = 1.0f, epsilon;
	
	printf("Enter epsilon: ");
	scanf("%f", &epsilon);

	for (int i = 1, fact = 1 ; (1.0f / fact) >= epsilon; ++i, fact *= i) {
		e += 1.0f / fact;
	}

	printf("Approximation of e: %f\n", e);

	return 0;
}
