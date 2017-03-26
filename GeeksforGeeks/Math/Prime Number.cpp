
/*
For a given number chack if it is prime or not. A prime number is a number which is only divisible by 1 and itself.
 
Input:
First line contains an integer, the number of test cases 'T'. Each test case should contain a positive integer N.
Output:
Print "Yes" if it is a prime number else print "No".
Constraints:
1<= T <=30
1<= N <=100
Example: 
Input:
1
5
Output:
Yes
*/


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,notprime,tc;
    
    cin>>tc;
    while(tc--)
    {
      notprime=0;
      cin>>n;
      for(i=2;i<=n/2;i++)
       {    
          if(n%i==0)
          {   
              notprime++; 
              break;
          }
      }
      
      if(notprime==0 && n!= 1)   cout<<"Yes"<<endl;
      else                       cout<<"No"<<endl;
    }
   return 0;
}
