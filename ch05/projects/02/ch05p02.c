#include <stdio.h>

int main(void)
{
	int hours, minutes;

	printf("Enter a 24-hour time : ");
	scanf("%d :%d", &hours, &minutes);

	printf("Equivalent 12-hour time : ");
	if (hours % 12 == 0) printf("12:%.2d", minutes);
	else printf("%d:%.2d", hours % 12, minutes);
	hours < 12 || hours == 24 ? printf(" AM\n") : printf(" PM\n");

	return 0;
}
