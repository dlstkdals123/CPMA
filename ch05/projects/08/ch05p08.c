#include <stdio.h>

int main(void)
{
	int Hours, Minutes, Departure;

	printf("Enter a 24-hour time : ");
	scanf("%d :%d", &Hours, &Minutes);
	Minutes += Hours * 60;

	printf("Closest departure time is ");

	if (Minutes <= (9 * 60 + 43 + 8 * 60) / 2)
		printf("8:00 a.m., arriving at 10:16 a.m.\n");
	else if (Minutes <= (11 * 60 + 19 + 9 * 60 + 43) / 2)
		printf("9:43 a.m., arriving at 11:52 a.m.\n");
	else if (Minutes <= (12 * 60 + 47 + 11 * 60 + 19) / 2)
		printf("11:19 a.m., arriving at 1:31 p.m.\n");
	else if (Minutes <= (14 * 60 + 12 * 60 + 47) / 2)
		printf("12:47 p.m., arriving at 3:00 p.m.\n");
	else if (Minutes <= (15 * 60 + 45 + 14 * 60) / 2)
		printf("2:00 p.m., arriving at 4:08 p.m.\n");
	else if (Minutes <= (19 * 60 + 15 * 60 + 45) / 2)
		printf("3:45 p.m., arriving at 5:55 p.m.\n");
	else if (Minutes <= (21 * 60 + 45 + 19 * 60) / 2)
		printf("7:00 p.m., arriving at 9:20 p.m.\n");
	else
		printf("9:45 p.m., arriving at 11:58 p.m.\n");

	return 0;

}
