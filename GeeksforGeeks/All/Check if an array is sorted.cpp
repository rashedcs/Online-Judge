/*

Given an array, write a program that prints 1 if array is sorted in non-decreasing order, else prints 0.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N,N is the size of array.
The second line of each test case contains N input C[i].

Output:

Print 1 if array is sorted, else print 0.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 500
1 ≤ C[i] ≤ 1200

Example:

Input
2
5
10 20 30 40 50
6
90 80 100 70 40 30



*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,a[100],i,k,tc;
   
   cin>>tc;
   while(tc--)
   {
       
   k=0;
   cin>>n;
   for(i=1; i<=n;i++)
   {
     cin>>a[i];
   }

   for(i=1; i<n; i++)
   {
      if(a[i]>a[i+1]) k++;
   }

   if(k==0) cout<<"1"<<endl;
   else     cout<<"0"<<endl;
  }
   return 0;
}

