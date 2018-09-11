#include<bits/stdc++.h>
using namespace std;

stack<char>stk;

bool solve(string str)
{
        while(!stk.empty()) stk.pop();

        for(int i=0; i<str.size(); i++)
        {
            char c=str[i], t=stk.top();

           if(c=='(' || c=='{' || c=='[' ) 
           {
                stk.push(c);
           }
           else  if(stk.empty()) 
           {
                 return  false;
           }
           else if((c==')'&&t=='(') || (c=='}' && t=='{') || (c==']' && t=='['))
           {
                stk.pop();
           }

        }
        if(stk.empty()==false) return false;
        else                   return true;
}

int main(){
    int tc;
    scanf("%d ",&tc);
    string str;

    for(int i=1; i<=tc; i++)
    {
        getline(cin,str);
        if(solve(str)==false) printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
