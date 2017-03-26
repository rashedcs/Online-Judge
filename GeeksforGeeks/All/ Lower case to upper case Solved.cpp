/*
Lower case to upper case
 
Given a string containing only lowercase letters, generate a string with the same letters, but in uppercase.

Input:

The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow.
Each test case consist of one line. The first line of each test case consists of a string.

Output:

Corresponding to each test case, in a new line, print the string in uppercase.

Constraints:
1 ≤ T ≤ 100
1 ≤ string length ≤ 50

Example:

Input
2
geeks
geeksforgeeks

Output
GEEKS
GEEKSFORGEEKS
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
     int tc,cnt=1;

     char s[256];

     scanf("%d%*c",&tc);

     while(tc--)
     {
       cin>>s;
       for(int i=0; i<strlen(s);i++)
       {
         s[i]=toupper(s[i]);
       }
      cout<<s<<endl;
     }
     return 0;
}
