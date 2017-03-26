/*

The task is to complete merge() function which is used to implement Merge Sort.

Input:
First line of the input denotes number of test cases 'T'. 
First line of the test case is the size of array and second line consists of array elements.


Output:
Sorted array in increasing order is displayed to the user.


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



Simple Way :

 void merge(int arr[], int l, int m,  int r)
 {
    int l1, l2, i;

    int h = r;
    l1 = l;
    l2 = m + 1;
    i  = l;

    int b[r+1];
    while(l1<=m && l2<=h)
    {
      if(arr[l1]<=arr[l2])
      {
         b[i++] = arr[l1++];
      }

      else
      {
         b[i++] = arr[l2++];
      }
    }

    while(l1<=m)
    {
       b[i++] = arr[l1++];
    }

    while(l2<=h)
    {
       b[i++] = arr[l2++];
    }

    for(i = l; i<=h; i++)
    {
       arr[i] = b[i];
    }
}



Something Hard Way:
void merge(int arr[],int l,int m, int r) 
{
    if (l==r)  return;

    m = (l+r)/2;
    
    int i=l,j=m+1;
    int p=r-l+1;

  /// T *temp = new T [p];
  int *temp = new int [p];

    for (int k=0; k<p; k++)   ///So we can use for loop instead of while loop
    {
        if (j>r || (i<=m && arr[i]<arr[j]))
        {
            temp[k]=arr[i];
            i++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
        }
    }

    for (int k=0,i=l; k<p; k++,i++)
    {
        arr[i]=temp[k];
    }

    delete temp;
}










