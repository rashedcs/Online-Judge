/*

Given an array, print all its elements.

Input:

The first line of the input contains T denoting the total number of testcases.
The first line of each testcase contains N denoting the size of array.
The second line contains N space separated positive integers denoting the elements of array.


Output:

For each testcase, print all its element in new line.


Constraints:

1<=T<=20
1<=N<=100
1<=a[i]<=100

Example:
Input:
1
5
1 2 3 4 5

Output:
1 2 3 4 5

*/


#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int arr[100],tc,num;
	scanf("%d%*c",&tc);
	while(tc--)
	{
	    cin>>num;
	    for(int i=1; i<=num; i++) cin>>arr[i];
	    for(int i=1; i<=num; i++) cout<<arr[i]<<" ";
	    cout<<endl;
	}
	return 0;
}

