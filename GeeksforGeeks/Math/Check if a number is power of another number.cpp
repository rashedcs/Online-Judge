/*

Given two positive numbers x and y, check if y is a power of x or not.

Input:
First line contains an integer, the number of test cases 'T'.
Each test case should contain two positive numbers x and y.


Output:
Print 1 if y is a power of x, else print 0.

Constraints: 
1<=T<=30
1<=x<=1000
1<=y<=100000000

Example:
Input:
2
2 8
1 3

Output:
1
0

Explanation: 8 is a power of 2, but 3 is not a power of 1.


*/


#include<bits/stdc++.h>
using namespace std;


int main()
{
	int tc, a, b,len, cnt;
	
	cin>>tc;
	while(tc--)
	{
	    cnt=0;
	    cin>>a>>b;
	    for(int i=0; i<=b; i++)
	    {
	        if(pow(a,i)==b) 
	        {
	            cnt++; 
	            break;
	        }
	        
	    }
	    if(cnt)    cout<<"1"<<endl;
	    else       cout<<"0"<<endl;
	 
	}
	return 0;
}
