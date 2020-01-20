struct node {
  int data;
  struct node* next;
};

/* Returns the number of nodes in the list */
int Length(struct node* head);

/* Allocates and returns the list {1,2,3}. Used by some of the example
   code to build lists to work on. */
struct node* BuildOneTwoThree();

/* Given an int and a reference to the head pointer(i.e. a struct node**
   pointer to the head pointer), add a new node at the head of the list
   with the standard 3-step-link-in: create the new node, set its .next to
   point to the current head, and finally changed the head to point to the new
   node. */
void Push(struct node** headRef, int newData);

void BasicsCaller(){
  struct node* head;
  int len;

  head = BuildOneTwoThree(); // Start with {1,2,3}

  Push(&head, 13);        /*  Pushes 13 to the front yeilding {13,1,2,3}
                              The & is needed because head is passed as a r
                              reference pointer
                              */

  Push(&(head->next), 42); /* Pushes 42 into the second position yeilding
                              {13,42,1,2,3}. Demonstrates a use of our
                              ampersand on the .next field of a node.

                              */
  len = Length(head);      /*  Computes the length, which is 5
                              */

}// end of BuildOneTwoThree

int Length(struct node* head){
  int count = 0;
  struct node* current = head;

  while(current!= NULL){
    count++;
    current = current->next;
  }
  return count;
}
/*

  for(current = head; current != NULL; current = current->next)

*/
//=-=-=--=-=-==-=-=-=-==-=-=-=-=-=-=-=--=-=-==-=-=-=-==-=-=-=-=-=
/*
  Change the passed in head pointer to be NULL
  Uses a reference pointer to access the caller's memory
  @param: takes pointer to the value of interest
*/
void ChangeToNull(struct node** headRef){
  *headRef = NULL;
}

void ChangeCaller(){
  struct node* head1;
  struct node* head2;
  ChangeToNull(&head1);
  ChangeToNull(&head2);

}
/*
   Build — At Head With Push()
  The easiest way to build up a list is by adding nodes at its "head end"
  with Push(). The code is short and it runs fast -- which lists naturally
  support operations at their head end. The disadvantage is that the
  elements will appear in the list in the reverse orderr that they are added.
  If you don't care about order, then the head end is the best.

*/
struct node* AddAtHead(){
  struct node* head = NULL;
  int i;
  for(i=1;i<6;i++){
    Push(&head,i);
  }
  //head == {5,4,3,2,1}
  return(head);
}

/*
 Build — With Tail Pointer
 Adding a node to the tail of a list involves finding its tail or last node
 in the list, and then changing its .next field from NULL to point to the new
 node, such as the tail variable in the following example of adding a "3" node
 to the end of the list {1,2}
*/
//=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
/*
  Build — Special Case + Tail Pointer
  Consider the problem of building up the list {1, 2, 3, 4, 5} by appending the nodes to the
  tail end. The difficulty is that the very first node must be added at the head pointer, but all
  the other nodes are inserted after the last node using a tail pointer. The simplest way to
  deal with both cases is to just have two separate cases in the code. Special case code first
  adds the head node {1}. Then there is a separate loop that uses a tail pointer to add all the
  other nodes. The tail pointer is kept pointing at the last node, and each new node is added
  at tail->next. The only "problem" with this solution is that writing separate special
  case code for the first node is a little unsatisfying. Nonetheless, this approach is a solid
  one for production code — it is simple and runs fast.
*/

struct node* BuildWithSpecialCase(){
  struct node* head = NULL;
  struct node* tail;
  int i;
  //Deal with the head node here, and set the tail pointer
  Push(&head, 1);
  tail = head;

  // Do all the other nodes using 'tail'
  for(i=2;i<6;i++){
    Push(&(tail->next), i); // add node at tail->next
    tail = tail->next;      // advance tail to point to last node
  }
  return (head); // head == {1,2,3,4,5};
}

/*
Build — Temporary Dummy Node
This is a slightly unusual technique that can be used to shorten the code: Use a temporary
dummy node at the head of the list during the computation. The trick is that with the
dummy, every node appears to be added after the .next field of some other node. That
way the code for the first node is the same as for the other nodes. The tail pointer plays
the same role as in the previous example. The difference is that now it also handles the
first node as well.
*/
struct node* BuildWithDummyNode(){
  struct node dummy;  // Dummy node is temporarily the first node
  struct node* tail = &dummy;// Start the tail at the dummy
  int i;                     // Build the list on dummy.next (aka tail->next)
  dummy.next = NULL;
  for(i=1;i<6;I++){
    Push(&(tail->next),i);
    tail = tail->next;
  }
  // The real result list is now dummy.next
  // dummy.next == {1,23,3,4,5};
  return (dummy.next);

}

struct node* BuildWithLocalRef(){
  struct node* head = NULL;
  struct node** lastPtrRef = &head; // Start out pointing to the head pointer

  for(i=1; i<6;i++){
    Push(lastPtrRef, i); // Add node at the last pointer in the list
    lastPtrRef = &((*lastPtrRef)->next);
  }

  //head == {1,2,3,4,5}
  return (head);

}
