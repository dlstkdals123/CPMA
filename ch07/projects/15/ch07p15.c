#include <stdio.h>

int main(void) {
	short x, factorialx = 1;
	
	printf("Enter a positive integer : ");
	scanf("%hd", &x);

	for (int i = 2; i <= x; i++)
		factorialx *= i;

	printf("Factorial of %hd : %hd", x, factorialx);

	return 0;
}
