#include <stdio.h>
#include <ctype.h>

int main(void) {
	char initial, ch;

	printf("Enter a first and last name : ");
	scanf(" %c", &initial);

	while ((ch = getchar()) != ' ');
	while ((ch = getchar()) == ' ');
	do {
		printf("%c", ch);
	} while ((ch = getchar()) != ' ' && ch != '\n');

	printf(", %c.", toupper(initial));

	return 0;
}
