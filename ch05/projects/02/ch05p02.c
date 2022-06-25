// Prints a date in legal form

#include <stdio.h>

int main(void)
{
	int hour,minute;

	printf("Enter a 24-hour time : ");
	scanf("%d :%d", &hour, &minute);

	if (hour < 12)
		printf("Equivalent 12-hour time : %d:%d AM\n", hour, minute);
	else if(hour < 24)
		printf("Equivalent 12-hour time : %d:%d PM\n", hour-12, minute);
	else
		printf("Equivalent 12-hour time : 0:00 AM\n");

	return 0;
}