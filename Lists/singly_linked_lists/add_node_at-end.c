#include "list.h"
list_t *add_node_end(list_t **head, const char *str)
{
  list_t *new_node, *temp_n;

  new_node = malloc(sizeof(list_t));
  if (new_node == NULL)
    return (NULL);
  new_node->str = strdup(str);
  new_node->len = strlen(str);
  new_node->next = NULL;
  if (!*head)
    *head = new_node;
  else
  {
    temp_n = *head;
    while (temp_n->next)
      temp_n = temp_n->next;
    temp_n->next = new_node;
  }
  return (new_node);
}
