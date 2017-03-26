/*

Given a Binary Number, Print its decimal equivalent.
 

Input:

The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. Each test case contains a single Binary number. 
 

Output: 

Print each Decimal number in new line.
 

Constraints:

1< T <100
1<=Digits in Binary<=8
 

Example:

1
10001000
136

*/

#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc, decimal;
	string s;
	
	cin>>tc;
	while(tc--)
	{
      cin>>s;
      decimal = stoull(s, 0, 2);
      cout<<decimal<<endl;
	}
	return 0;
}
