#ifndef MAIN_H
#define MAIN_H
int push(struct node **headptr, int newdata);
int append(struct node **head_node, int new_data);
int insert_after(struct node *prev_node, int new_data);
int count_node(struct node *head_node);
void print_nodes(struct node *head_node);

#endif
