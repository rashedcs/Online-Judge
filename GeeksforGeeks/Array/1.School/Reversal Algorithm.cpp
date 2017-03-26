/*

Given an array of N size. The task is to rotate array by d elements where d is less than or equal to N.

Input:

The first line of input contains a single integer T denoting the number of test cases.
Then T test cases follow. Each test case consist of three lines. 
The first line of each test case consists of an integer N, where N is the size of array.
The second line of each test case contains N space separated integers denoting array elements. 
The third line of each test case contains "d" .

Output:

Corresponding to each test case, in a new line, print the modified array.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 200
1 ≤ A[i] ≤ 1000

Example:

Input

1
5
1 2 3 4 5
2

Output
3 4 5 1 2

*/




#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc, k, num, d, pstn;
	int arr[200];
	cin>>tc;
	
	while(tc--)
	{
	    cin>>num;
	    
	    for(int i=0; i<num; i++)
	    {
	        cin>>arr[i];
	        
	    }
	    
	    cin>>d;
	    
	    // it = lower_bound(arr.begin(), arr.end(), d);

	   //  pstn = it + 1 - arr.begin();

        for(int i=d; i<num; i++)
        {
            cout<<arr[i]<<" ";
        }
	    
	    for(int i=0; i<d; i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	   
	    cout<<endl;
	}
	return 0;
}
