
/*

Given a positive integer N, check if N is a power of 2.

Input:
The first line contains 'T' denoting the number of testcases. Then follows description of testcases.
Each testcase contains a single positive integer N.


Output:
Print "YES" if it is a power of 2 else "NO". (Without the double quotes)


Constraints:
1<=T<=100
0<=N<=10^18

Example:
Input :
2
1
98

Output :
YES
​NO

Explaination:  (2^0 == 1)

*/



#include<bits/stdc++.h>
using namespace std;

 int main()
 {
	unsigned long long n;
	int tc, cnt;
	
    cin>>tc;
     while(tc--)
     {
        cnt=0;
        cin>>n;
        for(int i=0; pow(2,i)<=n; i++)
        {
          if(pow(2,i)==n)
          {
            cnt++;
            break;
          }
        }
   
        if(cnt)    cout<<"YES"<<endl;
        else       cout<<"NO"<<endl;
      }
     
    return 0;
 }
