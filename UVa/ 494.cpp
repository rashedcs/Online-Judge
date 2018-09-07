#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    int cnt;
    cin.get();
    while(cin>>str)
    {
         cnt=0;
        for(int i=0; i<str.size(); i++)
        {
            if(isalpha(str[i]) && !isalpha(str[i+1])) cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
 
