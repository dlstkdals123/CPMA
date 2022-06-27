#include <stdio.h>

int main(void)
{
	int days, startingDay;

	printf("Enter number of days in month : ");
	scanf("%d", &days);
	printf("Enter starting day of the week (1=Sun, 7=Sat) : ");
	scanf("%d", &startingDay);

	printf("\n");
	for (int i = 1; i < startingDay; i++)
		printf("   ");
	for (int i = 1; i <= days; i++) {
		printf("%2d ", i);
		if (i % 7 == 8 - startingDay) printf("\n");
	}
	printf("\n");

	return 0;
}
