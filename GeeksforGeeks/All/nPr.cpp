/*
Write a program to calculate nPr. nPr represents n permutation r and value of nPr is (n!) / (n-r)!.

Input: The first line of the input contains T denoting the number of testcases. 
First line of the test case will be the value of n and r respectively.
Output: For each test case output will be the value of nPr.
Constraints:

1 <=n,r<= 20

n>=r


Example:

Input:

2
2 1
10 4

Output:

2
5040
*/

    #include<bits/stdc++.h>  
    using namespace std;  
      
    int main()  
    {  
         long long int n,c,r,tc,i,ans;  
         cin>>tc;
         
         while(tc--)
         {
           ans=1;
           cin>>n>>r;  
           c = n-r+1;  
           while(c<=n)  
           {  
             ans= ans * c;  
             c++;  
           }  
         cout<<ans<<endl;  
      }
    }  

