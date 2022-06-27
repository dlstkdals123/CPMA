#include <stdio.h>

int main(void)
{
	int month1, day1, year1,
		month2, day2, year2;

	printf("Enter first date (mm/dd/yy) : ");
	scanf("%d /%d/ %d", &month1, &day1, &year1);
	printf("Enter second date (mm/dd/yy) : ");
	scanf("%d /%d/ %d", &month2, &day2, &year2);

	if (year1 * 10000 + month1 * 100 + day1 < year2 * 10000 + month2 * 100 + day2)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
	else
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);

	return 0;

}
