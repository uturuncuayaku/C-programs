#include "dog_header.h"

/** 
  * Global structure
  * struct dog - structure for a beautiful dog
  * now in dog_header
  *
 struct dog
 {
	 char *name;
	 float age;
	 char *breed;
	 char *owner;
 };
 
  * Global dog type
  * typedef struct dog dog_t;
 */
 int main(void)
 {
	 struct dog my_doggy;
	 
	 init_dog(&my_doggy, "Luna", 8.0, "Luz Trujillo");
	 printf("My doggies name is %s and she is %.2f",my_dog.name, my_dog.age_;
	 
	 /**
	  * Using global dog type
	  * 
	 dog_t.name = "Billy";
	 dog_t.breed = "Mixed";
	 */
	 return (0);
	 
 }
 /**
  * Initializing dog function local to main only
  */
 void init_dog(struct dog *d, char *name, float age, char *owner, char *breed)
 {
	 if (d == NULL)
		return (0);
	d->name = name;
	d->age = age;
	d->owner = owner;
 }
