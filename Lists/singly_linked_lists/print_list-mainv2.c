#include "listv2.h"

int main(void)
{
	listi_t *head;
	listi_t *new;
	listi_t hello = {8, NULL};
	size_t n;
	
	head = &hello;
	new = malloc (sizeof(listi_t));
	if(!new)
		return (1);
	new->n = 100;
	new->next = head;
	n = print_listi(head);
	printf("All %lu elements\n", n);
	free(new);
	
	listi_t *head1;
	head1 = NULL;
	add_nodeint(&head1, 0);
	add_nodeint(&head1, 1);
	add_nodeint(&head1, 2);
	add_nodeint(&head1, 3);
	add_nodeint(&head1, 4);
	return (0);
}
