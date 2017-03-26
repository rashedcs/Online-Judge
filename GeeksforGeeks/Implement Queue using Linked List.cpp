/*

Implement a Queue using Linked List.

Input (To be used for Expected Output):

The first line of the input contains an integer 'T' denoting the number of test cases. Then T test cases follow.
First line of each test case contains an integer Q denoting the number of queries . 
A Query Q is of 2 Types
(i) 1 x   (a query of this type means  pushing 'x' into the queue)
(ii) 2     (a query of this type means to pop element from queue and print the poped element)

The second line of each test case contains Q queries seperated by space.

Output:
The output for each test case will  be space separated integers having -1 if the queue is empty else the element poped out from the queue . 
You are required to complete the two methods push which take one argument an integer 'x' to be pushed into the quee  and pop which returns a integer poped out from othe queue.

Constraints:
1<=T<=100
1<=Q<=100
1<=x<=100

Example:
Input
1
5
1 2 1 3 2 1 4 2   

Output
2 3

Explanation:

In the first test case for query 
1 2    the quee will be {2}
1 3    the queue will be {2 3}
2       poped element will be 2 the queue will be {3}
1 4    the queue will be {3 4}
2       poped element will be 3 


Note:The Input/Ouput format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console.
The task is to complete the function specified, and not to write the full code.

*/



/* 
The structure of the node of the queue is
struct QueueNode
{
    int data;
    QueueNode *next;
};


and the structure of the class is
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
public :
    void push(int);
    int pop();
};

 */



void Queue:: push(int x)
{
    QueueNode *newnode= new QueueNode;
    
    newnode->data=x;
    newnode->next=NULL;
    
    if(rear==NULL)
    {
        rear=newnode;
        front=newnode;
    }
    
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
     struct QueueNode *temp = front;
     int x ;
    if(front==NULL) return -1;
    
    else
    {
      x = temp->data;
      front = front->next;
      if (front == NULL)  rear = NULL;
    
    /* Free memory before going back , it is a good practise to free memory */
      free(temp);
      return x;
    }
}

