/*

Calculate all the composite numbers from 0 to N.

Input:
The first line contain an Integer T denoting the number of  test cases . 
Then T test cases follow. Each test case consist of an single integer N.

Output:
Print all the composite Number form 0 to N.

Constraints:

1 ≤ T ≤ 50
4 ≤ N ≤ 10000

Example:
Input:
1
10
Output:
4 6 8 9 10

*/





#include<bits/stdc++.h>
using namespace std;


int main()
{
	int tc,num,temp,sum;
	
	cin>>tc;
	while(tc--)
	{
	    cin>>num;
	    for(int i=4; i<=num; i++)
	    {
	        if(i%2==0 || i%3==0 ||  i%5==0 && i!=5 || i%7==0 && i!=7 )
	        {
	            temp=i;
	            cout<<temp<<" ";
	        }
	    }
	   cout<<endl;
	}
	return 0;
}
