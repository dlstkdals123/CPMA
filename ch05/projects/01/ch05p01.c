// Prints a date in legal form

#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter a number : ");
	scanf("%d", &n);

	printf("The number %d has ", n);
	if (n >= 0 && n < 10) printf("1");
	else if (n >= 10 && n < 100) printf("2");
	else if (n >= 100 && n < 1000) printf("3");
	else if (n >= 1000 && n < 10000) printf("4");
	printf(" digits\n");

	return 0;
}