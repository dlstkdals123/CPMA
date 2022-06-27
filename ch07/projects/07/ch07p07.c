#include <stdio.h>

int main(void) {
	int num1, denom1, num2, denom2, result_num, result_denom;
	char operator;

	printf("Enter two fractions separated by an operator: ");
	scanf("%d /%d %c %d /%d", &num1, &denom1, &operator, &num2, &denom2);

	switch (operator) {
	case '+':
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		break;
	case '-':
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
		break;
	case '*':
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
		break;
	case '/':
		result_num = num1 * denom2;
		result_denom = denom1 * num2;
		break;
	}

	int m = result_num > 0 ? result_num : -result_num, n = result_denom, r; // m, n is now positive numbers

	while (m % n != 0) {
		r = m % n;
		m = n;
		n = r;
	} // n is now gcd

	printf("%d/%d %c %d/%d = ", num1, denom1, operator, num2, denom2);
	if (result_num == result_denom) printf("1\n");
	else printf("%d/%d", result_num / n, result_denom / n);

	return 0;
}
