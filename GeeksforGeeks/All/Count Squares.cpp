/*

Given a sample space S consisting of all perfect squares starting from 1, 4, 9 and so on. You are given a number N, you have to print the number of integers less than N in the sample space S.

Input :
The first line contains an integer T, denoting the number of test cases.Then T test cases follow. The first line of each test case contains an integer N, denoting the number.

Output :
Print the answer of each test case in a new line.

Constraints :
1<=T<=100
1<=N<=10^18

Example
Input :
2
9
3

Output :
2
1

*/




#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc, num;
	cin>>tc;
	while(tc--)
	{
	    cin>>num;
	    cout<<(int)sqrt(num-1)<<endl;
	}
	return 0;
}
