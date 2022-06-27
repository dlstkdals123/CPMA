#include <stdio.h>

int main(void)
{
	int month, day, year,
		earliestMonth, earliestDay, earliestYear;

	printf("Enter first date (mm/dd/yy) : ");
	scanf("%d /%d/ %d", &earliestMonth, &earliestDay, &earliestYear);
	for (;;) {
		printf("Enter first date (mm/dd/yy) : ");
		scanf("%d /%d/ %d", &month, &day, &year);

		if (month == 0 && day == 0 && year == 0)
			break;

		if (year * 10000 + month * 100 + day < earliestYear * 10000 + earliestMonth * 100 + earliestDay) {
			earliestMonth = month;
			earliestDay = day;
			earliestYear = year;
		}
	}

	printf("%d/%d/%.2d is the earliest date", earliestMonth, earliestDay, earliestYear);

	return 0;

}
