/*
Given a positive integer N, find the Nth fibonacci number. 
Since the answer can be very large, print the answer modulo 1000000007.

Input:
The first line of input contains T denoting the number of testcases.
Then each of the T lines contains a single positive integer N.

Output:
Output the Nth fibonacci number.

Constraints:
1<=T<=100
1<=N<=1000

Example:

Input:
3
1
2
5

Output:
0
1
3
*/

#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
long long int fib(long long int n)
{
    long long int a = 0,b = 1, i=1, ans;
    if(n < 2)
    {
      return n;
    }
    
    else
    {
      while(i < n)
      {
          ans = (a+b) % MOD;
          a = b;
          b = ans;
          i++;
      }
      return ans;
    }
}


int main ()
{
  int n,tc;

  cin>>tc;
  while(tc--)
  {
   cin>>n;
   cout<<fib(n-1)<<endl;
  }
  return 0;
}
