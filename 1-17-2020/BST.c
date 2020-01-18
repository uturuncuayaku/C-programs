/*  Learning Binary Search Trees
 *
 * 
 *  cslibrary.stanford.edu/110/BinaryTrees.pdf
*/
#include <stddef.h>

struct node {
    int data;
    struct node *right;
    struct node *left;

}

struct node* NewNode(int data){
    struct node* New_Node =  new(struct node);
    node->data = data;
    node->right = NULL;
    node->left = NULL;

    return(node);
}

struct node* insert(struct node* node, int data){
    if(node == NULL){
        return (NewNode(data));
    }
    else{

        if(data <= node->data){
            node->left = insert(node->left, data);
        }
        else{
            node->right = insert(node->right,data);
        }
    }
    return (node);
}

int size(struct node* node){
    if(node == NULL){
        return 0;
    }
    else{
        return ( size(node->left) + 1 + size(node->right)  );
    }
}

int maxDepth(struct node* node){
    if(node==NULL){
        return(0);
    }else{
        //compute the depth of each subtree
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
        
        if(lDepth > rDepth) return (lDepth+1);
        else return (rDepth+1);
    }
}

struct node* build123a(){
    struct node* root = NewNode(2);
    struct node* left_child = NewNode(1);
    struct node* right_child = NewNode(3);

    node->left=left_child;
    node->right=right_child;
return(root);

}
struct node* build123b(){
    struct node* root = NewNode(2);
    node->left = NewNode(1);
    node->right = NewNode(3);
return(root);
}
