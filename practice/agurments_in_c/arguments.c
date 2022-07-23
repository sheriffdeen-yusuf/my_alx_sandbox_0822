#include <stdio.h>
#include <stdlib.h>

int main (int agrc, char *agrv[])
{
	int i, sum = 0;
	printf("arg count = %d\n", agrc);
		if (agrc <= 1)
			printf("agrc is just one -> %s\n", agrv[i]);
		else
		{
		printf("lets see whats in agrv[]\n");
		
		for (i = 1; agrv[i]; i++)
		{
			printf("agrv[%d] -> %s\n", i, agrv[i]);
			sum += atoi(agrv[i]);
			printf("Total is -> %d\n", sum);
		}


		} 
	
	return (0);

}
