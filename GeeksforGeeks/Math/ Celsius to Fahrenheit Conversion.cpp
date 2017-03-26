/*

Given a temperature in celsius, convert and print in farenheit.
 

Note: We need to print the floor value of the result.

Input:
The first line of input contains T denoting number of testcases. 
Each testcase contains single integer denoting the temperature in celsius.


Output:
For each testcase, output the temperature in farenheit.

Constraints:
1<=T<=100
1<=temperature in celsius<=100

Example:

Input:
1
32

Output:
89

*/


#include<bits/stdc++.h>
using namespace std;

int main()
 {
   int c,f,tc;
   
   cin>>tc;
   while(tc--)
   {
       cin>>c;
       f = 32 + 1.8*c;
       cout<<f<<endl;
   }
	return 0;
}

