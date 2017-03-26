/*

Given two numbers a and b, return their sum.

Input:

The first line of the input contains T denoting the total number of testcases. 
Each testcase contains two space separated positive integers denoting the value of a and b.

Output:
Output the sum of a and b.

Constraints:
1<=T<=100
1<=a,b<=1000

Example:


Input:
1
2 3

Output:
5

*/


#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc,a,b;
	cin>>tc;
	while(tc--)
	{
	    cin>>a>>b;
	    cout<<a+b<<endl;
	}
	return 0;
}


