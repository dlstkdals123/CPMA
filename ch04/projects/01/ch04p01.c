#include <stdio.h>

int main(void)
{
	int i1, i2;

	printf("Enter a two-digit number : ");
	scanf("%1d%1d", &i1, &i2);

	printf("The reversal is %d%d", i2, i1);

	return 0;
}