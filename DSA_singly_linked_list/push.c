#include <stdio.h>
#include "node.c"

/**
* push - creates new node head pointer
* @headptr: pointer to head pointer
* @newdata: data parameter for the nee node
* Return - 0 on success
*/ 


int push(struct node **headptr, int newdata)
{
	struct node *newheadptr = malloc(sizeof(struct node));
	newheadptr->data = newdata;
	newheadptr->link = (*headptr);

	*(headptr) = newheadptr;;
	return (0);
};
