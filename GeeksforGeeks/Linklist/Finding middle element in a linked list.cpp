/*

Given a singly linked list, find middle  of the linked list. For example, if given linked list is 1->2->3->4->5 then output should be 3. 

If there are even nodes, then there would be two middle nodes, we need to print second middle element. For example, if given linked list is 1->2->3->4->5->6 then output should be 4.

Input:
You have to complete the method which takes one argument: the head of the linked list. You should not read any input from stdin/console.
The struct Node has a data part which stores the data and a next pointer which points to the next element of the linked list. 
There are multiple test cases. For each test case, this method will be called individually.

Output:
Your function should return data of linked list.  If linked list is empty, then return -1.

Constraints:
1 <=T<= 30
1 <=N<= 100
1 <=value<= 1000

Example:
Input:
2
5
1 2 3 4 5
6
2 4 6 7 5 1

Output:
3
7

*/


/* Link list Node 
struct Node {
    int data;
    struct Node* next;
}; 
*/

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(struct Node *head)
{
  Node *temp = head;
  Node *kemp = head;
  
  while(temp!=NULL && temp->next!=NULL)
  {
      temp = temp->next->next;
      kemp = kemp->next;
  }
  
  return kemp->data;
}
