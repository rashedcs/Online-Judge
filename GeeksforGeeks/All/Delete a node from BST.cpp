/*

Given a Binary Search Tree (BST) and a node no 'x' , your task is to delete the node 'x' from the BST . You are required to complete the function deleteNode. You should not read any input from stdin/console. There are multiple test cases. For each test case, this method will be called individually.

Input (only to be used for Expected Output):
The first line of the input contains an integer 'T' denoting the number of test cases. Then 'T' test cases follow. Each test case consists of three lines. Description of  test cases is as follows:
The First line of each test case contains an integer 'N' which denotes the no of nodes in the BST.   .
The Second line of each test case contains 'N' space separated values  of the nodes in the BST.
The Third line of each test case contains an integer 'x' the value of the node to be deleted from the BST.

Output:
You are required to complete the function deleteNode which takes two arguments. The first being the root of the tree, and an integer 'x' denoting the node to be deleted from the BST . The function returns a pointer to the root of the modified BST .


Constraints:
1 <= T <= 50
1 <= N <= 50


Example:
Input
1
7
2 81 87 42 66 90 45 
81
Output
2 42 45 66 87 90

*/





/* The structure of a BST node is as follows:
struct node {
  int data;
  struct node * right, * left;
}; */


       node* FindMin(node* root)
       {
          while(root->left != NULL) root = root->left;
          return root;
       }


      node* deleteNode(node *root, int x)
      {

       if(root == NULL) return root;

       else if(x < root->data) root->left = deleteNode(root->left,x);

       else if (x > root->data) root->right = deleteNode(root->right,x);

       else
       {
         ///Case 1:  No child
         if(root->left == NULL && root->right == NULL)
         {
           delete root;
           root = NULL;
         }

        ///Case 2: One child
        else if(root->left == NULL)
        {
          struct node *temp = root;
          root= root->right;
          delete temp;
        }

        else if(root->right == NULL)
        {
          struct node *temp = root;
          root = root->left;
          delete temp;
        }

       ///case 3: 2 children
       else
        {
          node *temp = FindMin(root->right);
          root->data = temp->data;
          root->right = deleteNode(root->right,temp->data);
        }
      }
     return root;
  }
