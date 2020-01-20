struct node{
  int data;
  struct node* next;
};

void BuildOneTwoThree(){

}

void CountTest(){
  List myList = BuildOneTwoThree();
  int count = Count(myList,2);
}
int Count(struct node* head, int searchFor){
  struct node* current;
  int count=0;
  for( current = head; current != NULL; current = current->next ){
    if( node->data == 2)
    {
      count++;
    }
  }
  return(count);
}
