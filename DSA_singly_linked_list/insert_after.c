#include <stdio.h>
#include <stdlib.h>

/**
* insert_after - creates new node after a specific node
* @prev_node: pointer to current pointer
* @new_data: data parameter for the nee node
* Return - 0 on success
*/ 


int insert_after(struct node *prev_node, int new_data)
{
	if (prev_node == NULL)
	{
		printfln("previous node can not be NULL");
		return;
	}

	struct node *new_node = malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->link = prev_node->link;

	prev_node->link = new_node;
	return (0);
}
