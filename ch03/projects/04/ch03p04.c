#include <stdio.h>

int main(void)
{
	int phone_num1, phone_num2, phone_num3;

	printf("Enter phone number [(xxx) xxx-xxxx] : ");
	scanf(" (%d ) %d -%d", &phone_num1, &phone_num2, &phone_num3);

	printf("You entered %d.%d.%d", phone_num1, phone_num2, phone_num3);

	return 0;
}