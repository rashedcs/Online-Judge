/*

Given a quadratic equation in the form ax2 + bx + c, find floor of roots of it.  For example floor of 5.6 is 5.

Input:  First line contains an integer, the number of test cases 'T'. 
Each test case should contain three positive numbers a,b and c.

Output:  If roots of equations exits,
then print the two roots separated by space (Higher valued root should be printed before lower valued). 
Else if a = 0, then print "Invalid" as equation is not quadratic.  If roots are imaginary, then print "Imaginary"

Constraints:
1<=T<=50
1<=a<=1000
1<=b<=1000
1<=c<=1000


Example:
Input:
3
1 -2 1
1 -7 12
1 4 8

Output:
1 1
4 3
Imaginary

*/


#include<bits/stdc++.h>
using namespace std;

int main() 
 {

      double tc, a, b, c, x1, x2, d, r, i;
      cin>>tc;
       
      while(tc--)
      {
        cin>>a>>b>>c;
        d= b*b - 4*a*c;
    
        if (d>0) 
        {
          x1 = (-b + sqrt(d)) / (2*a);
          x2 = (-b - sqrt(d)) / (2*a);
          cout<<floor(x1)<<" "<<floor(x2)<<endl;
        }

        else if (d==0)
        {
          x1 = (-b + sqrt(d)) / (2*a);
          x2 = x1;
         cout<<floor(x1)<<" "<<floor(x2)<<endl;
        }

        else 
        {
          cout<<"Imaginary"<<endl;
        }
      }
    return 0;
 }
