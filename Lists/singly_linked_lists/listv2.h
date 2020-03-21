#ifndef _LISTV2_H_
#define _LISTV2_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct listi_s
{
	int n;
	struct listi_s *next;
}listi_t;

size_t print_listi(const listi_t *h);

#endif
