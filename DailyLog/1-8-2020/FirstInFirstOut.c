#include <stdio.h>
//malloc

typedef struct x {
  char name[20];
  int age;
  struct x * next_rec;
}linklist;

int main(){
  /*
   * Define pointers to the structure
  */
  linklist *start_pointer;
  linklist *next_pointer;

  char *names[]= {
    "Martin",
    "John  ",
    "Alex  ",
    "\0"
  };

  int ages[] = {32,43,29,0};
  //counter
  int count = 0;

  start_pointer = (linklist*)malloc(sizeof(linklist));
  //initialize next pointer to point to same location
  next_pointer = start_pointer;
  //place data into reserved memory
  strcpy(next_pointer->name, names[count]);
  next_pointer->age = ages[count];

  //loop until the data has been all read
  while( ages[++count] != 0){
    //reserve memory and point to it
    next_pointer->next_rec = (linklist *)malloc(sizeof(linklist));
    next_pointer = next_pointer->next_rec;

    strcpy(next_pointer->name,names[count]);
    next_pointer->age = ages[count];
  }
  next_pointer->next_rec = NULL;

  /* traverse linked list and all the the data within it*/

  next_pointer = start_pointer;
  while(next_pointer != NULL){
    printf("%s   ", next_pointer->name);
    printf("%s   ", next_pointer->age);
    next_pointer = next_pointer->next_rec;

  }









}//end of main
