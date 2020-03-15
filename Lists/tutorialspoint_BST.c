struct node {
	int data;
	struct node *left;
	struct node *right;
};
struct node* search(int data)
{
	struct node *current = root;

	printf("Visiting elements: ");

	while(current->data != data)
	{
		if(current != NULL)
		{	
			printf("%d ", current->data);
			//go to left tree
			if(current->data > data)
			{
				current = current->left;
			}
			else
			{
				current = current->right;
			}
		if(current == NULL)
			return (NULL);
		}
	}
	return (current);
}
void insert(int data)
{
	struct node *tempNode = (struct node *) malloc(sizeof(struct node));
	struct node *current;
	struct node *parent;;
	
	tempNode->data = data;
	tempNode->left = NULL;
	tempNode->right = NULL;
	
	if(root == NULL)
		root = tempNode;
	else {
		root = tempNode;
		parent = NULL;
	}
	while(1)
	{	
		parent = current;
	
		if (data < parent->data)
		{
			current = current->left;
		//insert to the left
			if (current == NULL)
			{
				parent->left = tempNode;
				return;
			}
		}
		else {
			current = current->right;

			//insert to the right
			if (current == NULL)
			{
				parent->left = tempNode;
			}
		}
		
	}
}