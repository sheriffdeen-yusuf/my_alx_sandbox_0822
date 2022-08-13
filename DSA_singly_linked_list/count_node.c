#include <stdio.h>
#include <stdlib.h>

/**
* count_node - counts all nodes in a list
* @head_node: pointer of the head node
* Return- The counf reesult of all node
*/

int count_node(struct node *head_node)
{
	int count;

	if (head_node == NULL)
	{
		printf("Linkedlist is empty\n");
	};

	count = 0;
	while (head_node != NULL)
	{
		count++; 
		head_node = head_node->link; 
	}
	
	printf("There are %d nodes in the list \n", count);
	return (count)
}
