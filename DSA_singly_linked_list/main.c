#include <stdio.h>
#include "main.h"

/**
* msin - Entry point
*
* Return: 0 on success
*/
 
struct node 
{
	int data;
	struct node *link;
}

int main()
{
	struct node *head = NULL;
	
	print_nodes(head);
	append(&head, 6);
	push(&head, 7);
	print_nodes(head);
	push(&head, 1);
	inster_after(head->link, 8);
	count_node(head);
	print_nodes(head);

	return (0);
}
