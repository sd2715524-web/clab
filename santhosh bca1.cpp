#include <stdio.h>
#include <math.h>

int main()
{
	double number =9.75;
	
	printf("Original number: %1f\n", number);
	
	printf("trunc(%1f) =%1f\n", number, trunc(number));
	
	printf("sqrt(%1f) =%1f\n", number, sqrt(number));
	
	printf("pow(%1f, 2) =%1f\n", number, pow(number, 2));
	
	printf("floor(%1f) =%1f\n", number, floor(number));
	
	printf("ceil(%1f) =1f\n", number, ceil(number));
	
	return 0;
}
