#include <stdio.h>

int main(void)
{
	int hours, minutes;

	printf("Enter a 24-hour time : ");
	scanf("%d :%d", &hours, &minutes);

	printf("Equivalent 12-hour time : ");
	if (hours % 12 == 0) printf("12:%.2d", minutes);
	else printf("%d:%.2d", hours % 12, minutes);
	if (hours < 12) printf(" AM\n");
	else printf(" PM\n");

	return 0;
}
