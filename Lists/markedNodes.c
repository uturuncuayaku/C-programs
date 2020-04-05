// Geeks for Geeks
#include <stdlib.h>

struct Node {
	int key;
	struct Node *next;
};

Node *newNode(int key){
	Node *temp = malloc(sizeof(struct Node));
	temp->key = key;
	temp->next = NULL;
	return temp;
}
void printList(Node *head){
	while (head != NULL){
		printf("Key: %d\n", head->key);
		head = head->next;
	}

}
bool detectLoop(Node *head){
	Node *temp = malloc(sizeof(struct Node));
	while (head != NULL){
		return(head->next == NULL);
		return(head->next == temp)
		Node *next = head->next;
		head->next = temp;
		head = next;
	}
	return 0;


}
int main(void){

	Node *head = malloc(sizeof(struct Node));
	head->next = malloc(sizeof(struct Node));
	head->next->next  = malloc(sizeof(struct Node));
	head->next->next->next = malloc(sizeof(struct Node));
	head->next->next->next->next = malloc(sizeof(struct Node));

	head->next->next->next->next->next = head->next->next;

	int found = detectLoop(head);
	printf("Found: %d\n",found);

	return 0;
}
