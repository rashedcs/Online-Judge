/*

Given a singly linked list, find the length of linked list. For example, if given linked list is 1->2->1->2->1->3->1, then output should be 7.

Input:
You have to complete the method which takes one argument: the head of the linked list. You should not read any input from stdin/console.
The struct Node has a data part which stores the data and a next pointer which points to the next element of the linked list. 
There are multiple test cases. For each test case, this method will be called individually.

Output:
You have to count the length of linked list and return the count value.

Constraints:
1 <=T<= 30
1 <=N<= 100
1 <=value<= 1000

Example:
Input:
2
5
1 2 3 4 5
7
2 4 6 7 5 1 0

Output:
5
7

*/




/*
Count the number of nodes 
in the linked list
Node is defined as 
struct node
{
    int data;
    struct node* next;
};
 
*/

int getCount(struct node* head)
{
 node *temp = head;
 int cnt = 0;
 
 while(temp!=NULL)
 {
     cnt++;
     temp=temp->next;
 }
 return cnt;

}
