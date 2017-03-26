/*

Write a program to find the simple interest for given principal amount P, time T(in years) and rate R.

Input:
First line contains an integer, the number of test cases 'T'. Each test case should contain three values P,T,R.

Output:
Print the simple interest

Constraints:
1<=T<=100
1<=P<=1000
1<=T<=20
1<=R<=20


Example:

Input:
2
42
8
15
501
10
5

Output:
50
250

*/




Write a program to find the simple interest for given principal amount P, time T(in years) and rate R.

Input:
First line contains an integer, the number of test cases 'T'. Each test case should contain three values P,T,R.

Output:
Print the simple interest

Constraints:
1<=T<=100
1<=P<=1000
1<=T<=20
1<=R<=20


Example:

Input:
2
42
8
15
501
10
5

Output:
50
250

*/

#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc,p,t,r;
	
	cin>>tc;
	while(tc--)
	{
	    cin>>p>>t>>r;
	    cout<<floor(0.01*p*t*r)<<endl;
	}
	return 0;
}



