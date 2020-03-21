#include "listv2.h"

size_t print_listi(const listi_t *head)
{
	unsigned int count = 0;
	
	while(!head)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}

listi_t *add_node(listi_t **head, const int data)
{
	listi_t *new;
	int v = data;
	
	if(!head)
		return (NULL);
	
	new = malloc(sizeof(listi_t));
	if(!new)
		return (NULL);
	
	new->data = v;
	new->next = *head;
	*head = new;
	
	return (*head);
}
