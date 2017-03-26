/*

/* The structure of a BST node is as follows:
struct node {
  int data;
  struct node * right, * left;
}; */

/* This function should insert a new node with given data and
   return root of the modified tree  

struct node *newNode(int data)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
*/

  struct node* insert(struct node* node, int data)
  {

    if (node == NULL)                     return newNode(data);
    else if (data < node->data)           node->left  = insert(node->left, data);
    else if (data > node->data)           node->right = insert(node->right, data);   
 
  
    return node;
  }
  


*/
