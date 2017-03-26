/*

Write a program to calculate the total surface area and volume of cuboid.

Input:
The first line of the input contains T denoting the number of testcases.
Each of the next T lines contains three space separated positive integers L, B, H denoting the length, width and height of cuboid respectively.


Output:
For each testcase, output two space separated integers denoting surface area and volume of cuboid respectively.


Constraints:
1<=T<=100
1<=l,b,h<=1000

Example:

Input:
1
1 2 3

Output:
22 6


*/

#include<bits/stdc++.h>
using namespace std;


int main() 
{
	int tc,l,b,h,volume,area;
	
	cin>>tc;
	while(tc--)
	{
	    cin>>l>>b>>h;
	    volume = 2*(l*b+b*h+h*l);  // Volume = l*b*h 
	    area   = l*b*h;            // Area = lb + bh + hl
	    cout<<volume<<" "<<area<<endl;   
	}
	return 0;
}
