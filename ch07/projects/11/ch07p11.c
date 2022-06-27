#include <stdio.h>
#include <ctype.h>

int main(void) {
	int count = 0;
	char firstInitial, secondInitial, ch;

	printf("Enter a first and last name : ");
	scanf(" %c", &firstInitial);

	ch = getchar();
	while ((ch = getchar()) != ' ');
	scanf(" %c", &secondInitial);
	printf("%c", toupper(secondInitial));
	ch = getchar();
	while (ch != '\n' && ch != ' ') {
		printf("%c", ch);
		ch = getchar();
	}
	printf(", %c.", toupper(firstInitial));

	return 0;
}
