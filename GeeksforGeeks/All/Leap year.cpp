/*
For an input year tell whether the year is leap or not. 

Input:
First line contains an integer, the number of test cases 'T' Each test case should contain a positive integer N(Year).


Output:
Print "Yes" if it is a leap year else "No". (Without the double quotes)


Constraints:
1<=T<=31
1<=N<=9999


Example:
Input:
1
4

Output:
Yes

*/



#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc, year;
	cin>>tc;
	while(tc--)
	{
	    cin>>year;
	    if(year%400==0 )                          cout<<"Yes"<<endl;
	    else if( year%100!=0 && year%4==0)        cout<<"Yes"<<endl;
	    else                                      cout<<"No"<<endl;
	}
	return 0;
}
