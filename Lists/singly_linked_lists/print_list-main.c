#include "list.h"

/**
 * main - function that creates a list
 */
 int main(void)
 {
   list_t *head;
   list_t *new_list;
   list_t hello = {"World", 5, NULL};=
   size_t str_len;

   head = &head;
   new = malloc(sizeof(list_t));
   if (new == NULL)
    printf("Malloc Failed",

  new->str = strdup("Hello");
  new->len = 5;
  new->next = head;
  head = new;

  n = print_list(head);
  printf("-> %lu elements\n", n);
  free(new->str);
  free(new);

  return (0);
 }
