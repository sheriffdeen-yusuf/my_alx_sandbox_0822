#include <stdio.h>

int main()
{	
	printf("How many eggs for the day?: ");
	
	int eggs;
	
	scanf("%i", &eggs);
	double dozen = (double) eggs/12;
	printf("you have %f dozen eggs. \n", dozen);
	

	// understanding strings
	//
	printf("may i know your name before you go? :) :  ");
	
	char name[20];

	scanf("%s", name);

	printf("Thanks for your response, %s!\n", name);
	return 0;
}
