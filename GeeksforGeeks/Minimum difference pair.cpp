/*

Given an unsorted array, find the minimum difference between any pair in given array.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N, the size of array. Second line of the test case is the Array.

Output:

Print the minimum difference between any two pairs.

Constraints:

1 <= T <= 30
1 < N <= 100
1 <= arr[i] <= 100000

Example:
Input:
2
5
2 4 5 7 9
10
87 32 99 75 56 43 21 10 68 49

Output:
1
6

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{

  int tc, n, k, temp, kemp;
  int arr[10];
  cin>>tc;

  while(tc--)
  {
    temp = 0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    }

    sort(arr , arr+n);

    temp = arr[1]-arr[0];
    for(int i=2; i<n; i++)
    {
       kemp = arr[i]-arr[i-1];
       temp = min(temp,kemp);
    }

    cout<<temp<<endl;
  }

  return 0;
}
