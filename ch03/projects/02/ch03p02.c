#include <stdio.h>

int main(void)
{
	int item, m, d, y;
	float price;

	printf("Enter item number : ");
	scanf("%d", &item);
	printf("Enter unit price : ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy) : ");
	scanf("%d /%d /%d", &m, &d, &y);
	printf("\n");

	printf("Item		Unit		Purchase\n");
	printf("		Price		Date\n");
	printf("%d		$%4.2f		%.2d/%.2d/%.4d\n", item, price, m,d,y);

	return 0;
}