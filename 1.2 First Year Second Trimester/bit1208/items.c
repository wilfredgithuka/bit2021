#include <stdio.h>

float items;
float price;
float total_price;

int main()
{
	printf("Enter the number of items bought: ");
	scanf("%f", &items);
	printf("Enter the price per item: ");
	scanf("%f", &price);
	
	total_price = items * price;
	
	printf("Total Price is %.2f\n", total_price);
		
}
