/*


Print the table of a given number upto 10. 

Input:
First line contains an integer, the number of test cases 'T'.
Each test case contains a number N whose table is to be printed..

Output:
Print the table of N upto 10.


Constraints: 
1<=T<=100
1<=N<=100

Example:
Input:
1
9 

Output:
9 18 27 36 45 54 63 72 81 90

*/



#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc,num;
 	int sum;
	cin>>tc;
     while(tc--)
     {
	    cin>>num;
	    for(int i=1; i<=10; i++)
	    {
	        sum = num*i;
	        cout<<sum<<" ";
	    }
	    cout<<endl;
     }
	   return 0;
}

