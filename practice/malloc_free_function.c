#include <stdio.h>
#include  <stdlib.h>

/**
* main - Entry point
* Return : 0 success
*
*/

int *input();

int main()
{
	int i, sum = 0;
	int *ptr = input();
	for (i = 0; i < 5; i++)
		sum += *(ptr + i);
	
	
	printf("sum is %d", sum);
	free(ptr);
	ptr = NULL;

	return 0;


}

int *input()
{
	int *ptr = (int *) malloc(5*sizeof(int));
	for (int i = 0; i < 5; i++)
 	{
		printf("Enter %d term ", i +1);
		scanf("%d", ptr + 1);
	}

	return ptr;
}	
