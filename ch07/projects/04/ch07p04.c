#include <stdio.h>

int main(void) {
	unsigned char ch;

	printf("Enter phone number : ");

	while ((ch = getchar()) != '\n') {
		if (ch < 'A' || ch > 'Z') printf("%c", ch);
		else if (ch >= 'A' && ch <= 'C') printf("2");
		else if (ch >= 'D' && ch <= 'F') printf("3");
		else if (ch >= 'G' && ch <= 'I') printf("4");
		else if (ch >= 'J' && ch <= 'L') printf("5");
		else if (ch >= 'M' && ch <= 'O') printf("6");
		else if (ch >= 'P' && ch <= 'S') printf("7");
		else if (ch >= 'T' && ch <= 'V') printf("8");
		else if (ch >= 'W' && ch <= 'Y') printf("9");
	}

	return 0;
}
