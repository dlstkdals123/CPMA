#include <stdio.h>

int main(void)
{
	int n;
	float e = 2.0f;
	
	printf("Enter integer n: ");
	scanf("%d", &n);

	for (int i = 2, fact = 1 ; i <= n; i++) {
		fact *= i;
		e += 1.0f / fact;
	}

	printf("Approximation of e: %f\n", e);

	return 0;
}
