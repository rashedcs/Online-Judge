/*

Check that the number can be divided by the sum of its digit.

Input:

The first line of input contains an integer T denoting the number of test cases.Then T test cases follow .Each test case consist of an integer N.

Output:

Print 1 if divisible else 0.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 100000

Example:

Input
2
18
19170

Output
1
1

*/





#include<bits/stdc++.h>
using namespace std;

int sum(int num)
{
  return num == 0 ? 0 : num%10 + sum(num/10) ;
}

int main()
 {
	int tc, num,temp;
	cin>>tc;
	while(tc--)
	{
	    cin>>num;
	    temp = sum(num);
	    if(num%temp==0) cout<<"1"<<endl;
	    else            cout<<"0"<<endl;
	}
	return 0;
}
