/*

Given a string, print the number of alphabets present in the string.

Input:

The first line of input contains an integer T denoting the number of test cases. 
The description of T test cases follows.Each test case contains a single string. 


Output:

Print the number of alphabets present in the string.

Constraints:

1<=T<=30

1<=size of string <=100


Example:

Input:
2
adjfjh23
njnfn_+-jf

Output:
6
7

*/

#include <bits/stdc++.h>
using namespace std;


int main()
{ 
   char s[100]; int tc,cnt;
   cin>>tc;

   while(tc--)
   {
     cnt=0;
     cin>>s;
     for(int i=0;s[i];i++)
     {
        char c =s[i];
        if(c>='A' && c <='Z' || c>='a' && c<='z')            cnt++;     
     } 
     cout<<cnt<<endl;
  
  }
   return 0;
}







