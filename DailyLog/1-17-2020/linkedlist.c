#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;

};*myNode=NULL;

void createLinkedList(int A[],int n){
    int i;
    struct Node *temp,*last;
    myNode=(struct Node *)malloc(sizeof(struct Node));
    myNode->data=A[0];
    myNode->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        temp=(struct Node *)malloc(sizeof(struct Node ));
        temp->data=A[1];

        temp->next=NULL;
        last->next=temp;
        last=temp;
    }

}
void Display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int main(void){
    int A[]={1,2,3,4,5,6,7,8,9};
    createLinkedList(A,9);
    Display(myNode);

}