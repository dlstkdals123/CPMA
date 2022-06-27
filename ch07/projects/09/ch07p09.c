#include <stdio.h>
#include <ctype.h>

int main(void) {
	int hours, minutes;
	char ch;

	printf("Enter a 12-hour time : ");
	scanf("%d :%d %c", &hours, &minutes, &ch);

	if (tolower(ch) == 'p')
		hours = (hours % 12) + 12;
	else if (tolower(ch) == 'a')
		hours %= 12;

	printf("Equivalent 24-hour time : %d:%d", hours, minutes);

	return 0;

}
