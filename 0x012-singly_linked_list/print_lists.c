#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (%s) \n", 0, "nill");
		else
			printf("[%d] %s \n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
