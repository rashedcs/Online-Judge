/*

Given a string S of length N, you have to tell whether it is good or not. A good string is one where the distance between every two adjacent character is exactly 1. Here distance is defined by minimum distance between two character when alphabets from 'a' to 'z' are put in cyclic manner. For example distance between 'a' to 'c' is 2 and distance between 'a' to 'y' is also 2. The task is to print "YES" or "NO" (without quotes) depending on whether the given string is Good or not.


Input:
First line of the input contains T denoting the number of test cases.Then T lines follow. Each line contains a string S.


Output:
Print  the answer for each testcase in a separate line.


Constraints:

1≤T≤50
1≤|S|≤50

Note: S contains only lowercase alphabetic characters


Input:
3
aaa
cbc
bcd

Output:
NO
YES
YES

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
 int tc, num;
 string arr;

 scanf("%d%*c",&tc);
 while(tc--)
 {
   num=0;
   cin>>arr;
   for(int i=0; i<arr.length(); i++)
   {
     if( abs(arr[i]-arr[i+1])==1 || abs(arr[i+1]-arr[i])==1)          num++;
     else if( abs(arr[i]-arr[i+1])==25 || abs(arr[i+1]-arr[i])==25)   num++;
   }
   
   if(arr.length()==(num+1))               cout<<"YES"<<endl;
   else                                    cout<<"NO"<<endl;

 }
 return 0;
}
