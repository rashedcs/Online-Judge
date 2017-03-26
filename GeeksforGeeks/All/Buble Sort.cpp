he task is to complete bubble function which is used to implement Bubble Sort.
/*
Input:
First line of the input denotes number of test cases 'T'. First line of the test case is the size of array and second line consists of array elements.


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



void bubble(int arr[], int i, int n)
{
    int temp;
    for (int k=0; k<n-i-1; k++)
    {
      if (arr[k] > arr[k+1])
      {
        temp = arr[k];
        arr[k] = arr[k+1];
        arr[k+1] = temp;
      }
    } 
}

