#include<bits/stdc++.h>
using namespace std;


string toString(int n)
{
  stringstream ss;
  ss << n;
  return ss.str();
}


string print(string s)
{
         string sub, output = "";
         if(isdigit(s[0]))
         {
                reverse(s.begin(), s.end());
                int i=0;
                while(i<s.size())
                {
                    if(s[i] == '1')
                    {
                         sub = s.substr(i,3);
                         output += static_cast<char>(atoi(sub.c_str()));
                         i += i+3;
                    }
                    else
                    {
                         sub = s.substr(i,2);            
                         output += static_cast<char>(atoi(sub.c_str()));
                         i += 2;
                    }
                }
                return output;
          }
          else
          {
                for(int i=0; i<s.size(); i++)
                {
                    output += toString( (int)s[i] );
                }
                reverse(output.begin(), output.end());

                return output;     
          }
}

int main()
{
    string str;
    while(getline(cin,str))
    {
           cout<<print(str)<<endl;
    }
    return 0;
}
