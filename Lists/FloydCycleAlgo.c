/* Geeks for Geeks */
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

void push (struct Node **head_ref, int new_data)
{
	struct Node* new_node = malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;

}
int detectloop(struct Node *list){
	struct Node *slow  = list;
	struct Node *fast = list;
	while(slow && fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast){
			printf("Found loop");
			return 1;
		}
	}
	return 0;
}
int main(void) {

	struct Node *head = NULL;

	push(&head, 15);
	push(&head, 70);
	push(&head, 23);
	push(&head, 51);
	
	head->next->next->next->next = head;
	detectloop(head);

	return 0;
}
