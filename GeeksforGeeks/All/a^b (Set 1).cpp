/*

For two given positive numbers a and b. Find a^b.

Input:
The first line contains an integer 'T' denoting the total number of test cases. 
In each test cases, there are two numbers a and b.


Output:
Find a^b.


Constraints:
1 <= T <= 30
1 <= a <= 10
1 <= b <= 10


Example:
Input:
2
1 1
5 2

Output:
1
25

*/




#include<bits/stdc++.h>
using namespace std;

int main()
 {
   long long a,b,tc,ans;
   
   cin>>tc;
   while(tc--)
   {
       cin>>a>>b;
       ans=pow(a,b);
       cout<<ans<<endl;
   }
	return 0;
}
