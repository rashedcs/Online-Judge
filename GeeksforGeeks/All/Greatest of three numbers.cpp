/*

Write a program to find the greatest of the three numbers. 

Input:
First line contains an integer, the number of test cases 'T'. 
Each test case should contain three positive numbers a,b and c.


Output:
Print maximum of three numbers.


Constraints:
1<=T<=30
1<=a<=1000
1<=b<=1000
1<=c<=1000


Example:
Input:
1
10 3 2

Output:
10

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,max,tc;
    cin>>tc;
    while(tc--)
    {
      cin>>a>>b>>c;
      max = (a>b)?(a>c)? a:c: (b>c) ? b:c;
      cout<<max<<endl;
    }
    return 0;
}


