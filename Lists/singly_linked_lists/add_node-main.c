#include "list.h"
/**
 */

int main(void)
{
  list_t *head;
  head = NULL;

  add_node(&head, "Andres");
  add_node(&head, "Jair");
  add_node(&head, "Luz");
  add_node(&head, "Joanna");
  add_node(&head, "Luna");

  print_list(head);
  return (0);
}
