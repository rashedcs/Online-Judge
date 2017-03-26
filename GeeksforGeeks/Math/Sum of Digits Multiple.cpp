/*
Check that the sum of Digits is multiple of number or not.

Input:
The first line of input contains an integer T denoting the number of test cases.Then T test cases follow .
Each test case consist of an integer N.

Output:
Print Yes if multiple else No

Constraints:
1 ≤ T ≤ 50
1 ≤ N ≤ 100000

Example:
Input
2
18
99270

Output
Yes
No
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int num,sum,r,tc,temp;
   
   cin>>tc;
   while(tc--)
   {
     sum=0;
     cin>>num;
     temp=num;
     while(num)
     {
        r=num%10;
        num=num/10;
        sum=sum+r;
     }
     if(temp%sum==0)  cout<<"Yes"<<endl;
     else             cout<<"No"<<endl;
   }
  return 0;
}
