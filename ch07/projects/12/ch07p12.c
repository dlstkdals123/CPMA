#include <stdio.h>

int main(void) {
	double result, x;
	char ch;

	printf("Enter an expression : ");
	scanf("%lf", &result);

	while ((ch = getchar()) != '\n') {
		scanf("%lf", &x);
		switch (ch) {
		case '+': result += x; break;
		case '-': result -= x; break;
		case '*': result *= x; break;
		case '/': result /= x; break;
		}
	}

	printf("Value of expression : %.2f", result);
}
