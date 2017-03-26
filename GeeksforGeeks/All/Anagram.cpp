/*

Given two strings, check whether two given strings are anagram of each other or not. 
An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “act” and “tac” are anagram of each other.

Input:

The first line of input contains an integer T denoting the number of test cases.
Each test case consist of two strings in 'lowercase' only, in a separate line.

Output:

Print "YES" without quotes if the two strings are anagram else print "NO".

Constraints:

1 ≤ T ≤ 30

1 ≤ |s| ≤ 100

Example:

Input:
2
geeksforgeeks
forgeeksgeeks
allergy
allergic

Output:
YES
NO

*/

#include<bits/stdc++.h>
using namespace std;


bool is_anagram(string s1, string s2)
{
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  return s1 == s2;
}

int main()
{
    string str1,str2;
    int tc,cnt;
    
    cin>>tc;
    while(tc--)
    {
        cin>>str1;
        cin>>str2;
        
        cnt = is_anagram(str1,str2);
        
        if(cnt==1)   cout<<"YES"<<endl;
        else         cout<<"NO"<<endl;
    }
   return 0;
}





#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    int tc,cnt;
    
    cin>>tc;
    while(tc--)
    {
        cin>>str1;
        cin>>str2;
        
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        
        if(str1==str2)   cout<<"YES"<<endl;
        else             cout<<"NO"<<endl;
    }
   return 0;
}



