#include <stdio.h>
#include "main.h"

int main()
{
	int n;
	int *ptrn = &n;
	
	printf("Enter a integer number: ");
	scanf("%d", ptrn);

	mc(ptrn);	
	return(0);
}
