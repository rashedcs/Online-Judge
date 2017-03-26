/*

Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number. There are several combinations possible. Print only first such pair. 

NOTE: A solution will always exist, read Goldbach’s conjecture.

Also, solve the problem in linear time complexity, i.e., O(n).

 

Input:

The first line contains T, the number of test cases. The following T lines consist of a number each, for which we'll find two prime numbers.

Note: The number would always be an even number.

 
Output:

For every test case print two prime numbers space separated, such that the smaller number appears first. Answer for each test case must be in a new line.


Constraints:

1 ≤ T ≤ 70
1 ≤ N ≤ 10000


Example:

Input:

5
74
1024
66 
8
9990

Output:

3 71
3 1021
5 61
3 5
17 9973



*/

#include<bits/stdc++.h>
using namespace std;  

long long int prime(int a)  
 {  
    int p,q,f=1;  
    for(p=2; p<=sqrt(a); p++)  
    {  
        if(a%p==0)  f=0;  
    }  
    return f;  
 }  
  
  
int main()  
 {  
      long long int n, tc,i,j;  
      cin>>tc;
       while(tc--)  
       {  
           cin>>n;
           for(int i=3; i<n; i=i+2)  
           {  
              j=n-i;  
              if(prime(i)&&prime(j))
              {
                cout<<i<<" "<<j<<endl; 
                break;  
              }

          }  
       }  
    
    return 0;  
  } 
