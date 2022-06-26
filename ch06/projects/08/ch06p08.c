#include <stdio.h>

int main(void)
{
	int Days, StartingDay;

	printf("Enter number of days in month : ");
	scanf("%d", &Days);
	printf("Enter starting day of the week (1=Sun, 7=Sat) : ");
	scanf("%d", &StartingDay);

	printf("\n");
	for (int i = 1; i < StartingDay; i++)
		printf("   ");
	for (int i = 1; i <= Days; i++) {
		printf("%2d ", i);
		if (i % 7 == 8 - StartingDay) printf("\n");
	}
	printf("\n");

	return 0;
}
