/*

The task is to complete heapify() and buildHeap() functions which are used to implement Heap Sort. 

Input:
First line of the input denotes number of test cases 'T'. 
First line of the test case is the size of array and second line consists of array elements.


Output:
Sorted array in ascending order.


Constraints:
1 <=T<= 50
1 <=N<= 1000
1 <=arr[i]<= 1000


Example:

Input:
2
5
4 1 3 9 7
10
10 9 8 7 6 5 4 3 2 1

Output:
1 3 4 7 9
1 2 3 4 5 6 7 8 9 10

*/

/* Main function to do heap sort. This function uses buildHeap()
   and heapify()
void heapSort(int arr[], int n)  {
    buildHeap(arr, n);
    for (int i=n-1; i>=0; i--)  {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
} 

// The functions should be written in a way that array become sorted 
// in increasing order when above heapSort() is called.

// To heapify a subtree rooted with node i which is  an index in arr[]. 
// n is size of heap. This function  is used in above heapSor()
void heapify(int arr[], int n, int i)  
{
      // Your Code Here
}

// Rearranges input array so that it becomes a min heap
void buildHeap(int arr[], int n)  { 
    // Your Code Here
}
*/
void heapify(int arr[], int n, int i)
{
    int largest = i;  
    int l = 2*i ;  
    int r = 2*i + 1;  

    if (l<n && arr[l] > arr[largest])   largest = l;

    if (r<n && arr[r] > arr[largest])   largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}


void buildHeap(int arr[], int n)
{
  for(int i=(n/2); i>=0; i--)
  {
    heapify(arr, n, i);
  }
}


void heapSort(int arr[], int n)
{
    // Build heap (rearrange array) //heap sort function ar maje built heap....
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i); 
    }
 
   
   /*
  void buildHeap(int arr[], int n)
  {
    for(int i=(n/2); i>=0; i--)
    {
      heapify(arr, n, i);
    }
  }
   */
   
   
   
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
