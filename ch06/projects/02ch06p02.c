#include <stdio.h>

int main(void)
{
	int i1, i2, Remainder;

	printf("Enter two integers : ");
	scanf("%d %d", &i1, &i2);

	printf("Greatest common divisor : ");

	while (i2 != 0) {
		Remainder = i1 % i2;
		i1 = i2;
		i2 = Remainder;
	}
	printf("%d", i1);

	return 0;
}
