#include <stdio.h>

int main(void)
{
	int max, max1, min, min1, n1, n2, n3, n4;

	printf("Enter four integers : ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	if (n1 > n2) {
		max = n1;
		min = n2;
	}
	else {
		max = n2;
		min = n1;
	}
	if (n3 > n4) {
		max1 = n3;
		min1 = n4;
	}
	else {
		max1 = n4;
		min1 = n3;
	}

	if (max < max1) max = max1;
	if (min > min1) min = min1;

	printf("Largest : %d\nSmallest : %d", max, min);

	return 0;

}
