#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dlist_s
{
	int n;
	struct dlist_s *prev;
	struct dlist_s *next;
	
}dlist_t;

size_t print_dlist(const dlist_t *h)
{
	int ct = 0;
	while(!h->n)
	{
		printf("%d\n",h->n);
		h = h->next;
		ct++;
	}
	return ct;
}

dlist_t *add_dnode(dlist_t **head, const int n)
{
	dlist_t *new;
	new = malloc(sizeof(dlist_t));
	
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if(*head)
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return new;
	}
	*head = new;
	return (*head);
}

dlist_t *push_dnode(dlist_t **head, const int n)
{
	dlist_t new;
	dlist_t c = *head;
	new = malloc(sizeof(dlist_t));
	
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	
	if(!*head)
	{
		*head = new;
		return new;
	}
	while(c->next)
	{
		c = c->next;
	}
	new->next = NULL;

	new->prev = c;
	c->next = new;
	
	return new;
}
void free_dnode(dlist_t *head)
{
	dlist_t c;
	while(head != NULL)
	{
		c = head->next;
		free(head);
		head = c;
	}
}
