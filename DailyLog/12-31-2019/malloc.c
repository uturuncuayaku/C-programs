#include <stdlib.h>
#include <string.h>

typedef struct{
  int age;
  int *name;

}person;

int main(void){
  //declare a new struct
  person me;

  //set some data
  me.age = 33;
  me.name = malloc(6 * sizeof(char));
  strcpy(me.name, "Andres");

  //create a pointer to a struct
  person *me_ptr = &me;
  
  //set data with horrible syntax
  (*me_ptr).age = 33;
  (*me_ptr).name = realloc( (*me_ptr).name, 7* sizeof(char) );

  //set data with better syntax
  me_ptr->age = 34;
  me_ptr->name = realloc(me_ptr->name, 8 * sizeof(char));
  strcpy(me_ptr->name, "Andres!!");
  


}