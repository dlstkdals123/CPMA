#include <stdio.h>
#include <math.h>

int main(void) {
	int x;
	double y = 1;

	printf("Enter a positive number : ");
	scanf("%d", &x);

	while (fabs(y - x/y) >= .00001){
		y = (y + x / y) / 2;
	}

	printf("Square root : %.5lf", y);

	return 0;
}
