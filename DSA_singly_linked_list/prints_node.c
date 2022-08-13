#include <stdio.h>
#include <stdlib.h>

/**
* print_nodes - prints all data of nodes in the list
* @head_node: The head start of linked list
* Return: void
*/

void print_nodes(struct node *head_node)
{
	if (head_node == NULL)
	{
		printf("nothing to print\n");
	}

	while (head_node != NULL)
	{
		printf("Data are: %d %s",  head_node->data, head_node->link ? ", " : "\n");
		head_node = head_node->link;
	}

}
