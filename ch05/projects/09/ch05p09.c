#include <stdio.h>

int main(void)
{
	int Month1, Day1, Year1,
		Month2, Day2, Year2;

	printf("Enter first date (mm/dd/yy) : ");
	scanf("%d /%d/ %d", &Month1, &Day1, &Year1);
	printf("Enter second date (mm/dd/yy) : ");
	scanf("%d /%d/ %d", &Month2, &Day2, &Year2);

	if (Year1 * 10000 + Month1 * 100 + Day1 < Year2 * 10000 + Month2 * 100 + Day2)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", Month1, Day1, Year1, Month2, Day2, Year2);
	else
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", Month2, Day2, Year2, Month1, Day1, Year1);

	return 0;

}
