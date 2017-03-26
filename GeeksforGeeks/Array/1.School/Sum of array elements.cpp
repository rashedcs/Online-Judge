/*

Given an integer array, find sum of elements in it.

Input:

First line contains an integer denoting the test cases 'T'. 
Every test case contains an integer value depicting size of array 'N' and N integer elements are to be inserted in the next line with spaces between them.

Output:

Print the sum of all elements of the array in separate line.

Constraints:
1 <= T <= 100
1 <= N<= 100
1 <= Arr[i] <= 100

Example:

Input:
2
3
3 2 1
4
1 2 3 4

Output:
6
10

*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int arr[100],tc,num,sum;
	
	cin>>tc;
	while(tc--)
	{
	    sum=0;
	    cin>>num;
	    for(int i=1; i<=num; i++) cin>>arr[i];
	    for(int i=1; i<=num; i++) 
	    {
	        sum+=arr[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}



