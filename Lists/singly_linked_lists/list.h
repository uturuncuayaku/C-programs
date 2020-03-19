#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list.h"

typedef struct list_s
{
  char *str;
  unsigned int len;
  struct list_s *next;

}list_t;

size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t list_length(const list_t *h);
#endif
