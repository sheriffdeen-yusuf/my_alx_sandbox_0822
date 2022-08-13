#include <stdio.h>
#include "node.c"

/**
* append - creates new node at the need of the last node
* @head_node: points to the head node ad transvers to last nods
* @new_data: data parameter for the nee node
* Return - 0 on success
*/ 


int append(struct node *head_node, int new_data)
{

	struct node *new_node = malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->link = NULL;
	
	struct *last_node = head_node;

	if (head_node == NULL)
	{
		new_node = head_node;
	};

	while(head_node->link != NULL)
		head_node = head_node->link;

	last_node->link = new_node;
	return (0);
}
