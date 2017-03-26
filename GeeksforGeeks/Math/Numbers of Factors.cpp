/*

Find number of factors for a given integer N.

Input:
First line contains an integer, the number of test cases 'T' Each test case should contain a positive integer N.
 

Output:
In each seperate line print the number of factors (including 1 and the number itself).


Constraints:
1<= T <=30
1<= N <=100


Example:
Input:
1
5

Output:
2



*/
#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc, num, cnt;
	cin>>tc;
	while(tc--)
	{
	    cnt = 0;
	    cin>>num;
	    for(int i=1; i<=num; i++)
	    {
	        if(num%i==0) cnt++;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
