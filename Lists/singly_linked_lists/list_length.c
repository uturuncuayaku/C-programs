#include "list.h"
/**
 */
size_t list_length(const list_t *h)
{
  unsigned int i = 0;
  const list_t *temp_h = h;

  for(;temp_h; temp_h = temp_h->next)
    i++;
  return (i);
}
