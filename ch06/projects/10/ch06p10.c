#include <stdio.h>

int main(void)
{
	int Month, Day, Year,
		EarliestMonth, EarliestDay, EarliestYear;

	printf("Enter first date (mm/dd/yy) : ");
	scanf("%d /%d/ %d", &EarliestMonth, &EarliestDay, &EarliestYear);
	for (;;) {
		printf("Enter first date (mm/dd/yy) : ");
		scanf("%d /%d/ %d", &Month, &Day, &Year);

		if (Month == 0 && Day == 0 && Year == 0)
			break;

		if (Year * 10000 + Month * 100 + Day < EarliestYear * 10000 + EarliestMonth * 100 + EarliestDay) {
			EarliestMonth = Month;
			EarliestDay = Day;
			EarliestYear = Year;
		}
	}

	printf("%d/%d/%.2d is the earliest date", EarliestMonth, EarliestDay, EarliestYear);

	return 0;

}
