/*

You are given a positive integer N and you have to find the number of non negative integral solutions to a + b + c = N.
 

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
The first and only line of each test case contains a positive integer N.

Output:
For each test case in a new line, print the number of possible non negative integral solutions.
 

Constraints:
1 <= T <= 100
1 <= N <= 1000
 

Example:

Input:
2
10
20

Output:
66
231

*/




#include<bits/stdc++.h>
using namespace std;


int main()
 {
	int tc, num, ans;
	cin>>tc;
	while(tc--)
	{
	    cin>>num;
	    ans = ((num+1)*(num+2))/2;
	    cout<<ans<<endl;
	}
	return 0;
}

