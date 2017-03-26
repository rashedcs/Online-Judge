/*

Given a number and its base, convert it to decimal. The base of number can be anything such that all digits can be represented using 0 to 9 and A to Z. Value of A is 10, value of B is 11 and so on.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is the base and second line of test case is the number which is to be converted to decimal.

Output:
Decimal conversion of the given number is displayed in the output.


Constraints:
1 <= T <= 5
2 <= base <=16
1 <= N <= decimal equivalents till 999999999

Example:
Input:
3
2 
1100
16
11A
8
123

Output:
12
282
83
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
   int tc, num, base, ans, temp ;
   string hex;
   
   cin>>tc;
   while(tc--)
   {
      ans = 0;
      cin>>base;
      cin>>hex;
  
      for (int i=0; i<hex.length(); i++) 
      {
         if (hex[i]>=48 && hex[i]<=57)       ans += (hex[i]-48)*pow(base,hex.length()-i-1);
         else if (hex[i]>=65 && hex[i]<=70)  ans += (hex[i]-55)*pow(base,hex.length()-i-1);
         else if (hex[i]>=97 && hex[i]<=102) ans += (hex[i]-87)*pow(base,hex.length()-i-1);
      }
      
      cout<<ans<<endl;
   }
   return 0;
}
