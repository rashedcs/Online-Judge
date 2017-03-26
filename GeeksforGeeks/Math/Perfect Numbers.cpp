/*

Given a number and check if a number is perfect or not.
A number is said to be perfect if sum of all its factors excluding the number itself is equal to the number.

Input:
First line consists of T test cases. Then T test cases follow .Each test case consists of a number N.

Output:
Output in a single line 1 if a number is a perfect number else print 0.

Constraints:
1<=T<=300
1<=N<=10000

Example:
Input:
2
6
21
Output:
1
0

*/


#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int num,tc,sum;
    
   cin>>tc;
   while(tc--)
   {
      sum=0;
      cin >> num;
      for(int i=1; i<num; i++)
      {
         if(num%i==0)
         sum=sum+i;
      }
      
      if(sum==num || num==1)  cout<<"1"<<endl;
      else         cout<<"0"<<endl;
   }

    return 0;
 }
