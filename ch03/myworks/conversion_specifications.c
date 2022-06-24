#include <stdio.h>

int main(void)
{
	int i = 81, j = 123;
	float x = 3141.59200;

	printf("%d %d\n", i);
	printf("%d\n", i, j);
	printf("%f %d\n", i, x);
	printf("\n");

	printf("%.3d\n", i);
	printf("%5d\n", i);
	printf("%5.3d\n", i);
	printf("%.2d\n", j);
	printf("\n");

	printf("%.5e\n", x);
	printf("%13.0e\n", x);
	printf("%13.5e\n", x);
	printf("\n");

	printf("%12.5f\n", x);
	printf("\n");

	printf("%8.8g\n", x);
	x = 3141.0f;
	printf("%8.8g\n", x);
	x = 314159265358979.0f;
	printf("%g\n", x);
	x = 0.000031415926535f;
	printf("%g\n", x);

	return 0;
}