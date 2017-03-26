/*
Given an array and a number k where k is smaller than size of array, the task is to find the k’th smallest element in the given array. It is given that all array elements are distinct.

Input:

First Line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of three lines. First line of each test case contains an integer N denoting size of the array. Second line contains N space separated integer denoting elements of the array. Third line of the test case contains an integer K.

Output:

Corresponding to each test case, print the desired output in a new line.

Constraints:
1<=T<=100
1<=N<=1000
K<N

Expected Time Complexity: O(n)

Example:

INPUT
2
6
7 10 4 3 20 15
3
5
7 10 4 20 15
4

Output:
7
15

*/
  #include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    int tc, temp, kth, n, arr[50];  
    
    cin>>tc;
    while(tc--)
    {
        temp = 0;
        cin>>n;
        for(int i=0; i<n; i++)    cin>>arr[i];
      
        cin>>kth;

        sort(arr, arr + n);

        temp = arr[kth-1];

        cout<<temp<<endl;
    }

    return 0;
  }
