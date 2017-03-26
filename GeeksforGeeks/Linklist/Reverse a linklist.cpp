/*
Given pointer to the head node of a linked list, the task is to reverse the linked list.

Input:
You need to complete a method reverse() that takes head as argument and returns new head.
There are multiple test cases. For each test case, this method will be called individually.  The first line of input contains number of test cases.  Every test case has two lines, number of nodes first line and data values in next line.

Output:
Reverse the linked list and return head of the modified list.


Example:
Input:
1
6
1 2 3 4 5 6

Output:
6 5 4 3 2 1
*/

/* Linked List Node structure
   struct Node  {
     int data;
     struct Node *next;
  }
*/

// Should reverse list and return new head.
struct Node* reverse(struct Node *head)
{
    Node *curr = head, *prev = NULL;
    
    while (head->next!=NULL)
    {
        head = head->next; // move the head to next node
        curr->next = prev; //break the link to the next node and assign it to previous
        prev = curr;      // we are done with previous, move it to next node
        curr = head;      // current moves along with head
    }

    head->next = prev;     //for last node
   // return head;
}









 void reverse(Node *head)
 {
    Node *curr = head, *prev = null;

    while (head->next != null)
    {
        head = head->next; // move the head to next node
        curr->next = prev; //break the link to the next node and assign it to previous
        prev = curr;      // we are done with previous, move it to next node
        curr = head;      // current moves along with head
    }

    head->next = prev;     //for last node
}







Way 2 :
struct Node* reverse(struct Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    
    while (curr != NULL) 
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
