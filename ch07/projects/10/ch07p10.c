#include <stdio.h>
#include <ctype.h>

int main(void) {
	int count = 0;
	char ch;
	
	printf("Enter a sentence : ");
	while ((ch = tolower(getchar())) != '\n') {
		switch (ch) {
		case 'a': case 'e': case 'i': case 'o': case 'u':
			count++;
		}
	}

	printf("Your sentence contains %d vowels", count);

	return 0;
}
