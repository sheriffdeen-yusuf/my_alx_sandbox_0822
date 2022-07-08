#include "main.h"


void more_numbers(void)
{
	int c;

	c = '0';
	
	while (c <= '9')
	{	
		int i;
		
		for (i = 0; i <= 14; i++)
		{
			if ((i / 10) == 0)
				_putchar(i + '0');
			else
			{ 
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			
		}
		
		_putchar('\n');

		c++;
	}
	_putchar('\n');
}
