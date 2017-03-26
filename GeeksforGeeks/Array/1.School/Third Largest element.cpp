/*

Given an array of distinct elements, Your task is to find the third largest element in it. You have to complete the function thirdLargest which takes two argument . The first argument is the array a[] and the second argument is the size of the array (n). The function returns an integer denoting the third largest element in the array a[].

The function should return -1 if there are less than 3 elements in input.
 

Input:

The first line of input contains an integer T denoting the number of test cases. 
Then T test cases follow . The first line of each test case is N,N is the size of array.
The second line of each test case contains N space separated values of the array a[ ].

Output:

Output for each test case will be  the third largest element of the array . 

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 100
1 ≤ A[ ] ≤ 100

Example(To be used for only expected output):

Input:
1
5
2 4 1 3 5

Output:
3

The function should return third largest element 
     in arr[0..n-1]. It may be assumed that all elements
     are distinct.  
  */
int thirdLargest(int a[], int n)
{
         int temp;
         sort(a, a + n);
         if(n<3)    temp = -1;
         else       temp = a[n-3];

         return temp;
}
