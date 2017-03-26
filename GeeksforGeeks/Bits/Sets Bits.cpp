/*

Given a positive integer N, print count of set bits in it. For example, if the given number is 6, output should be 2 as there are two set bits in it.

Input:

The first line of input contains an integer T denoting the number of test cases.
Then T test cases follow. The next T lines will contain an integer N.

Output:
Corresponding to each test case, in a new line, print count of set bits in it.

Constraints:

1 ≤ T ≤ 100

1 ≤ N ≤ 1000000


Example:

Input:

2
6
11
 

Output:
2
3

*/

#include<bits/stdc++.h>
using namespace std;



int main()
{
   int tc, sb, num;
   cin>>tc;
   while(tc--)
   {
     sb = 0;
     cin>>num;
     while(num)
     {
      sb+= num&1;
      num=num>>1;
     }
     cout<<sb<<endl;;
   }
   
   return 0;
}

