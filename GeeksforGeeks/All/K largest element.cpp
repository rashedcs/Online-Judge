/*

Given an array, print k largest elements from the array.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N and k, N is the size of array and K is the largest elements to be returned.
The second line of each test case contains N input C[i].

Output:

Print the k largest element in descending order.

Constraints:

1 ≤ T ≤ 50
1 ≤ N ≤ 100
K ≤ N
1 ≤ C[i] ≤ 1000

Example:

Input:
2
5 2
12 5 787 1 23
7 3
1 23 12 9 30 2 50

Output:
787 23
50 30 23
*/
 #include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    int arr[100], tc, n, key, temp;  
    cin>>tc;

    while(tc--)
    {
        cin>>n>>key;

        for(int i=0; i<n; i++)    cin>>arr[i];

        sort(arr, arr + n);
      
        for(int i=0; i<key; i++)
        {
           cout<<arr[n-1-i]<<" ";
        }
        
        cout<<endl;
    }

    return 0;
  }
