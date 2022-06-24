#include <stdio.h>

int main(void)
{
	int ISBN, prefix, identifier, code, item, check;

	printf("Enter ISBN: ");
	scanf("%d -%d -%d -%d -%d", &prefix, &identifier, &code, &item, &check);

	printf("GSI prefix: %d\n", prefix);
	printf("Group identifier: %d\n", identifier);
	printf("Publisher code: %d\n", code);
	printf("Item number: %d\n", item);
	printf("Check digit: %d\n", check);

	return 0;
}