/*

Given a decimal number and the base to which it should be converted. Convert the given number to the given base.

Input:
The first line of input contains an integer T denoting the number of test cases. 
The first line of each test case is the base and second line of test case is the decimal number.

Output:
Decimal number converted to the given base is displayed to the user.


Constraints:
1 <= T <= 5
2 <= base <=16
1 <= N <= 999999999

Example:

Input:
3
2
12
16
282
8
83

Output:
1100
11A
123

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int tc,num,base,i,temp,rem,ans, quotient ;
   char hex[100];
   
   cin>>tc;
   while(tc--)
   {
      cin>>base;
      cin>>num;
      if(base==2)
      {
        bitset<16>bin(num);
        cout<<bin;
      }

      else
      {
         i=1;
         quotient = num;
         while(quotient!=0)
         {
           temp = quotient%base;

           if(temp<10)   temp = temp + 48;
           else          temp = temp + 55;
      
           hex[i++]= temp;
           quotient = quotient / base;
         }

         for(int j=i-1; j>0; j--)   cout<<hex[j];
      }
      cout<<endl;
   }
   return 0;
}






Alternative :
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int tc,num,base,i,temp,rem,ans, quotient ;
   char hex[100];
   
   cin>>tc;
   while(tc--)
   {
         cin>>base;
         cin>>num;

         i=1;
         quotient = num;
         while(quotient!=0)
         {
           temp = quotient%base;
           if(temp<10)   temp = temp + 48;
           else          temp = temp + 55;
      
           hex[i++]= temp;
           quotient = quotient / base;
         }

         for(int j=i-1; j>0; j--)   cout<<hex[j];
         cout<<endl;
     }
    return 0;
}



