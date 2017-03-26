/*

Given a value N, you need to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.

Input :
The first line contains integer T, denoting number of test cases. Then T test cases follow. The only line of each test case contains an integer N.

Output :
Print in a new line the answer of each test case .

Constraints :

1<=T<=10^5
1<=N<=10^9

Example:
Input :
3
6
10
30

Output :
1
2
3

*/

#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    for(int i=2; i<n; i++)
        if(n%i==0)  return 0;
        return 1;
}


int main()
 {
	int t,n,cnt;
    cin>>t;
    while(t--)
    {  
        cnt = 0;
        cin>>n;
        for(int i=2; i<=sqrt(n);  i++)
        {
          if(isprime(i))    cnt++;
        }
       cout<<cnt<<endl;
    }
	return 0;
}
