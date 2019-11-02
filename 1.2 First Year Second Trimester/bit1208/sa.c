#include <stdio.h>
#include <math.h>

float radius;
float height;
float surface_area;

int main()
{
	printf("Enter the radius \n");
	scanf("%f", &radius);
	printf("Enter the height \n");
	scanf("%f", &height);
	
	surface_area = 2* M_PI * radius * (height + radius);
	printf("Surface area of a cyclinder is: %.2f", surface_area);
	
	return 0;
}
