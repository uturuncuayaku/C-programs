#ifndef _DOG_HEADER_H
#define _DOG_HEADER_H
#define NULL ((void*)0)

#include <stdio.h>
#include <stdlib.h>

struct dog
{
	char *name;
	float age;
	char *breed;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner, char *breed);


#endif
