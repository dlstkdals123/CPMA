#include <stdio.h>

int main(void)			
{
	printf("%6d, %4d\n", 86, 1040);
	// My answer:		****86,1040
	// Actual answer:	****86, 1040

	printf("%12.5e\n", 30.253);
	// My answer:		**3.0253e+01
	// Actual answer:	*3.02530e+01

	printf("%.4f\n", 83.162);
	// My answer:		83.1620
	// Actual answer:	83.1620

	printf("%-6.2g\n", .0000009979);
	// My answer:		9.97e-07
	// Actual answer:	1e-06

	return 0;
}