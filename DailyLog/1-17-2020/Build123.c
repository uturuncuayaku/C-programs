struct node{
    int data;
    struct node *left;
    struct node *right;
}

struct node *newNode(int data){
    struct node *nn = new(struct node);
    node->data = data;
    node->left=NULL;
    node->right=NULL;

    return (node);
}
struct node* insert(struct node* node, int data){
    if ( node == NULL){
        return ( newNode(data) );
    }else{
        if ( data <= node->data){
            node->left = insert(node->left,data);
        }else{
            node->right = insert(node->right, data);
        }
    }
    return (node)
}
// call newNode() three times
struct node* build123a(){

    struct node* root = newNode(2);
    struct node* lchild = newNode(1);
    struct node* rchild = newNode(3);

    root->left = lchild;
    root->right = rchild;

    return (root);

}
//call newNode() three times and use only one local variable
struct node* build123b(){
    struct node* root = newNode(2);
    root->left = newNode(1);
    root->right = new Node(3);

return(root);
}
struct node* build123c(){
    struct node* root = NULL;
    root = insert(root,2);
    root = insert(root,1);
    root = insert(root,3);
return (root);
}

