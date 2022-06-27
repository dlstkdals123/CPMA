#include <stdio.h>

int main(void) {
	int length = 0, wordCount = 1;
	char ch;

	printf("Enter a sentence : ");
	while ((ch = getchar()) != '.') {
		if (ch == ' ') wordCount++;
		else length++;
	}
	printf("Average word length : %.1f", length / (double)wordCount);

	return 0;
}
