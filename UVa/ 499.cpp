#include<bits/stdc++.h>
using namespace std;


int main()
{
      string s;
      while(getline(cin,s))
      {
            map<char, int> each;
            int  top=0;
            
            for(int i=0; i<s.size(); ++i)
            {
                  if(isalpha(s[i]))
                  {
                     each[s[i]]++;
                     top = max(top, each[s[i]]);
                  } 
            }
            for(auto it: each)
            {
                if(it.second == top)cout<<it.first;
            }
            printf(" %d\n",top);
      }
      return 0;  
}
