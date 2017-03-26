/*


Given a singly linked list with n nodes, find node at a given index of linked list. 

Input:
You have to complete the method which takes one argument: the head of the linked list. 
You should not read any input from stdin/console.
The struct Node has a data part which stores the data and a next pointer which points to the next element of the 
linked list. 
There are multiple test cases. For each test case, this method will be called individually.

Output:
Your function should return data of N'th node.
Constraints:
1 <=T<= 30
1 <=N<= 100
K <= N
1 <=value<= 1000

Example:
Input:
2
6 5
1 2 3 4 657 76
10 2
8 7 10 8 6 1 20 91 21 2

Output:
657
7

*/

/* Print he nth node in the linked list Node is defined as 
struct node
{
    int data;
    struct node* next;
}; */

// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list

int GetNth(struct node* head, int index)
{
    node* temp = head;
    int pos = 0;
    while (temp != NULL)    
    {    
       if (pos == index)  
       {
           return temp->data;
       }
       
       temp = temp->next;    
     } 
}
