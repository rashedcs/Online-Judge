/*



*/


You are given the pointer to the head node of a linked list. You have to print all of its elements in order in a single line.
 

Input:

You have to complete a method which takes one argument: the head of the linked list. You should not read any input from stdin/console. The struct Node has a data part which stores the data and a next pointer which points to the next element of the linked list. There are multiple test cases. For each test case, this method will be called individually.


Output:

Print the elements of the linked list in a single line separated by a single space.


Example:
Input
2
2
1 2
1
4

Output
1 2
4


/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void display(Node *head)
{
    Node *temp;    
    temp=start;   
    
    while(temp!=NULL)    
    {    
     cout<<temp->data<<" ";    
     temp=temp->next;    
    }    
}


