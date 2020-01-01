#include <stdio.h>
#include <stddef.h>

/* Declaration of the array which is considered as
 * our memory and since its an array we get 
 * contiguous memory allocation by the C compiler
 * global variable memory
 * 
 */
char memory[20000];


/* 
 * Structure definition to contain metadata of
 * each block allocated or deallocated
 * 
*/
struct block{
  size_t size;            // Carries the size of block
  int free;               // Flag to know whether the block is free or not
  struct block *next;     // Pointer to the next data block
};

/* Global variable */
struct block *freeList =  (void*)memory;

void initialize();
void split(struct block *fitting_slot, size_t size);
void *myMalloc(size_t numOfBytes);
void merge();

void myFree(void* ptr);













