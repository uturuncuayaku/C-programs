#include <stdio.h>
#include <stddef.h>
#include "mallocV2.h"

void initialize(){
  freeList->size = 20000- sizeof(struct block); 
  freeList->free = 1;
  freeList->next = NULL;
}

/*Making way for a new block allocation by splitting a free block -- (Assume first fit algorithm)*/
void split(struct block *fitting_slot,size_t size){
 struct block *new=(void*)((void*)fitting_slot+size+sizeof(struct block));
 new->size=(fitting_slot->size)-size-sizeof(struct block);
 new->free=1;
 new->next=fitting_slot->next;
 fitting_slot->size=size;
 fitting_slot->free=0;
 fitting_slot->next=new;
}

/*Function MyMalloc(malloc)*/
void *MyMalloc(size_t noOfBytes){
 struct block *curr,*prev;
 
 void *result;

 if(!(freeList->size)){ 
  initialize();
  printf("Memory initialized\n");
 }
 
 curr=freeList;

 
 while((((curr->size)<noOfBytes)||((curr->free)==0))&&(curr->next!=NULL)){

   
  prev=curr;
  curr=curr->next;
  printf("One block checked\n");
 }
 
 if((curr->size)==noOfBytes){
    curr->free=0;
  result=(void*)(++curr);
  printf("Exact fitting block allocated\n");
  return result;
 }  else if((curr->size)>(noOfBytes+sizeof(struct block))){
   
  split(curr,noOfBytes);
  result=(void*)(++curr);
  printf("Fitting block allocated with a split\n");
  return result;
 }
 
 else{
  result=NULL;
  printf("Sorry. No sufficient memory to allocate\n");
  return result;
 }
}