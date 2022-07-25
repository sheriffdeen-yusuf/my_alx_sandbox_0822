#include <stdio.h>
#include <stdlib.h>

/**
* malloc - Allocate a dynamic memory of n size and prints
* @n: Th number of size to be allocated
* Return - void
*
*/

void mc(int *n)
{
	int i, c;
	int *ptr = (int *) malloc(*n * sizeof(int));
	
	if (ptr == NULL)	
	{
		printf("EROR! No memory is allocated");
		exit(1);
	}

	printf("value of n %d\n", *n);
	for (i = 0; i < *n; i++)
	{
		 printf("Enter value for %dth term \n", i + 1 );
		 scanf("%d", ptr + i);
	}
	
	for (i = 0; i < *n; i++)
	{
		printf("item at %d is %d\n", i+1, *(ptr + i));
	}
	

}
