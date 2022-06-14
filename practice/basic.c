#include <stdio.h>

int main(){

	printf("Enter a number");
	int radius;

	scanf("%i", &radius);
	int y = radius / 2;

	printf("The half of the input number %i, is %i", radius, y);
	
	return 0;
}	
