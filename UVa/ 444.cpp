#include<bits/stdc++.h>
using namespace std;

string encode(string s)
{
          string sub, answer="";
          int v=0;
          for(int i=0; i<s.size(); i++)
          {
                sub  = to_string(s[i]);
                answer += sub;
          }
          reverse(answer.begin(), answer.end());

          return answer;   
}

string decode(string s)
{
        reverse(s.begin(), s.end());
        string sub, output="";

        int l=0, i=0;
        while(i<s.size())
        {
            (s[i]=='1')? l=3:l=2;
            sub = s.substr(i,l);            
            output += static_cast<char>(atoi(sub.c_str()));
            i += l;
        }
        return output;
}

int main()
{
        string str;
        while(getline(cin,str))
        {
            if(isdigit(str[0]))
               cout<<decode(str)<<endl;
            else 
               cout<<encode(str)<<endl;
        }
        return 0;
}
