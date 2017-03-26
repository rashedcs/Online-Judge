/*

Given a linked list, the task is to find the n'th node from the end.  It is needed to complete a method that takes two argument, head of linked list and an integer n. There are multiple test cases. For each test case, this method will be called individually.


Input:
The first line of input contains number of test cases.  Every test case cntains two lines.  First line of every test case contains two space separated values, number of nodes  in linked list followed by value of n.  Second line of every test case contains data items of linked list.


Output:
Corresponding to each test case, output a single integer that is the nth integer in the linked list from the end. Print -1 if the value of n is greater than the number of elements in the linked list.
Constraints:
1 <= T <= 50
0 <= No of Nodes <= 1000
0 <= Data in Nodes <= 1000


Example:
Input:
2
9 2
1 2 3 4 5 6 7 8 9
4 5
10 -5 -100 5 
 

Output:
8
-1

In the first example, there are 9 nodes in linked list and we need to find 2nd node from end.  2nd node from end os 8.   In the second example, there are 4 nodes in linked list and we need to find 5th from end.  Since 'n' is more than number of nodes in linked list, output is -1.

*/

int getNthFromLast(struct Node *head, int n)
{
       Node* temp = head;
       Node* kemp = head;
       
       int cnt =0;
       
       while(temp && cnt<n )
       {
           temp = temp->next;
           cnt++;
       }
       
       if(cnt< n)  return -1; 
       
    
       else 
       {
          while(temp)
          {
             temp = temp->next;
             kemp= kemp->next;
          }
         return kemp->data;
       }
     
}







int getNthFromLast(struct Node *head, int n)
{
      Node* kemp=head;
      Node* qNode=head;
     
      int count =0;
      
      while(kemp!=NULL)
      {
         count++;
         if(count-n>0)
         {
           qNode=qNode->next;
         }
         kemp = kemp->next;
      }
      
      if(count<n)        return -1;
      else               return    qNode->data;
}

