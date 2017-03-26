/*
Calculate the area of rectangle, right angled triangle and circle.

Input:

The first line of the input contains T denoting the number of testcases.
Then follows the description of testcase. Each testcase contains 5 space separated positive integers denoting the length of rectangle, width of rectangle, base of right angled triangle, perpendicular of right angled triangle and radius of circle respectively.

Output:

For each testcase, output a single line containing 3 space separated integers denoting the area of rectangle, area of right angled triangle, and area of circle respectively.

Note: We need to print the floor values of the areas. Also take value of pi = 3.14

Constraints:

1<=T<=50

1<=length / breadth / base / perpendicular / radius  <= 100

Example:

Input:
1
32 32 54 12 52

Output:
1024 324 8490
*/


#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int l,b,ba,p,r,tc,cr;
	
	cin>>tc;
	while(tc--)
	{
	    cin>>l>>b>>ba>>p>>r;
	    cout<<l*b<<" "<<floor(0.5*ba*p)<<" "<<floor(3.14*r*r)<<endl;
	}
	return 0;
}

