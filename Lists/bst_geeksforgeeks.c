#include "holberton.h"

struct node
{
	int key;
	struct node *left, *right;
};
//utility function to create a new BST node
struct node *newNode(int item)
{
	struct node*temp = (struct node *)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return (temp);
}

// a utility function to inorder traversal of BST
void inorder(struct node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d\n", root->key);
		inorder(root->right);
	}
}
/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key)
{
	// if tree empty return a new node
	if (node == NULL) return newNode(key);
	//otherwise recur down the tree
	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);
	return (node);
}

struct node* search (struct *node root, int key)
{
	if (root = 0 || root ->key == key)
		return (root);
	if (root->key < key)
		return search(root->right, key);
	
	return search(root->left, key);
	
}
int main(void)
{
	struct node *root = NULL;
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);	
	insert(root, 60);	
	insert(root, 80);
	insert(root, 70);

	inorder(root);
	
	return(0);
}
