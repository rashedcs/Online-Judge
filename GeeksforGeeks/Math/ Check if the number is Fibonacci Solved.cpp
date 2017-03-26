/*
Check if a given number is Fibonacci number. Fibonacci number is a number which occurs in Fibonacci series.

Input:
The first line of input contains an integer T denoting the number of test cases.
Each test case contains a number.

Output:
Print "Yes" if the entered number is Fibonacci number else "No".
 
Constraints:
1<=t<=100
1<=n<=100

Example:

Input
2
34
41

Output
Yes
No

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc,num,temp1,temp2;
    double  root1,root2;
    
    cin>>tc;
    while(tc--)
    {
      cin>>num;
      
      root1 = sqrt(5.0*num*num + 4.0);
      root2 = sqrt(5.0*num*num - 4.0);

      temp1 = root1;
      temp2 = root2;

      if(root1 == temp1 || root2 == temp2)     cout<<"Yes"<< endl;
      else                                     cout<<"No"<<endl;
    }
    
    return 0;
}
