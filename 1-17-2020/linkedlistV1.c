#include <stdio.h>
#include<stdlib.h>

struct Node{
    void *data;
    struct Node *next;
};

void push(struct Node** head_reference,void *new, size_t data_sz){
    //allocate memory for node
    struct Node* new_Node = (struct Node*)malloc(sizeof(struct Node));
    new_Node->data = malloc(data_sz);
    new_Node->next = (*head_reference);

    // copy contents of data_sz to newly allocated memory
    // assume char takes 1 byte.
    int i;
    for( i=0; i<data_sz; i++ ){
        *(char *)(new_Node->data + i) = *(char *)(new+i);
    }

    //make head point to new node
    (*head_reference)=new_Node;
}
void print(){

}
void printInteger(){

}
void printFloat(){

}

int main(void){
    
    struct Node *start = NULL;
    int A[] ={1};

    push(&start, &A[0], sizeof(int));
}