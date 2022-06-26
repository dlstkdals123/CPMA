#include <stdio.h>

int main(void)
{
	int Max, Max1, Min, Min1, n1, n2, n3, n4;

	printf("Enter four integers : ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	if (n1 > n2) {
		Max = n1;
		Min = n2;
	}
	else {
		Max = n2;
		Min = n1;
	}
	if (n3 > n4) {
		Max1 = n3;
		Min1 = n4;
	}
	else {
		Max1 = n4;
		Min1 = n3;
	}

	if (Max < Max1) Max = Max1;
	if (Min > Min1) Min = Min1;

	printf("Largest : %d\nSmallest : %d", Max, Min);

	return 0;

}
