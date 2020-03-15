//#include <stdio.h>

#define ALLOCSIZE 10000 // size asking from program to pc
static char alloc_Buffer[ALLOCSIZE];//storage
static char *alloc_ptr = alloc_Buffer;//next free position

char *alloc(int n){
  if(alloc_Buffer + ALLOCSIZE - alloc_ptr >= n){
    alloc_ptr += n;
    return alloc_ptr - n;
  }else
  { return 0; }
}

void afree(char *p){
  if(p >= alloc_Buffer & p < alloc_Buffer + ALLOCSIZE){
      alloc_ptr = p;
  }
}
