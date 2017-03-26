/*

Given an array, swap kth element from beginning with kth element from end.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N and k,N is the size of array and kth number.
The second line of each test case contains N input C[i].

Output:

Print the modified array.

Constraints:

1 ≤ T ≤ 100
1 ≤ K ≤ N ≤ 500
1 ≤ C[i] ≤ 1000

Example:

Input
1
8 3
1 2 3 4 5 6 7 8

Output
1 2 6 4 5 3 7 8

*/



#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc, n, k;
    int arr[1000];
	
	cin>>tc;
	while(tc--)
	{
	    cin>>n>>k;
	    for(int i=0; i<n; i++)
	    {
	      cin>>arr[i];
	    }
	    
	    swap(arr[k-1], arr[n-k]);
	    
	    for(int i=0; i<n; i++)
	    {
          cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
