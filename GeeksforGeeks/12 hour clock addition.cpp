/*

Given two positive integers num1 and num2, the task is to find the sum of the two numbers on a 12 hour clock rather than a number line.

Input
First line of the input contains an integer T denoting the number of test cases. 
Then T test cases follow. Each test case consists of a single line containing two integers seperated by a space .


Output
Corresponding to each test case, print the sum in a new line.


Constraints:

1<=T<=100
0<=num1<=50
0<=num2<=50
 

Example:

Input:
2
7 5
3 5

Output
0
8

*/


#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc,a,b,ans,temp;

	cin>>tc;
	while(tc--)
	{
	    cin>>a>>b;

	    if(a+b==12 || a+b==24)            ans = 0;
	    else if(a+b<12)                   ans = a+b;
	    else
	    {
	         temp = (int) ((a+b) / 12);
                 ans = (a+b) - temp*12;
	    }

	    cout<<ans<<endl;
	}
	return 0;
}

///Alternative :
ans = (a+b)%12;

