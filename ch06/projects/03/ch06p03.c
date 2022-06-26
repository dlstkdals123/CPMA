#include <stdio.h>

int main(void)
{
	int i1, i2;

	printf("Enter a fraction : ");
	scanf("%d /%d", &i1, &i2);

	int m = i1;
	for (int n = i2, GCD; n != 0; ) {
		GCD = m % n;
		m = n;
		n = GCD;
	}
	
	printf("In lowest terms : %d/%d", i1 / m, i2 / m);

	return 0;
}
