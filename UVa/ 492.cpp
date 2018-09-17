#include<bits/stdc++.h>
using namespace std;

bool isvowel(char c)
{
    c = tolower(c);
    bool s = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    return s ;
}


void encrypt(string s)
{
        for(int i=0; i<s.size(); i++)
        {
                if(isalpha(s[i]))
                {
                    int  t=i;
                    if(isvowel(s[i]))   
                    {
                            cout<<s[i++];
                            while(isalpha(s[i]))
                            {
                              cout<<s[i++];
                            }
                            cout<<"ay";
                    }
                    else
                    {
                            i++;
                            while(isalpha(s[i]))
                            {
                              cout<<s[i++];
                            }
                            cout<<s[t]<<"ay";
                    }
                }
                cout<<s[i];
        }
}


int main()
{
    string s;
    while(getline(cin, s))
    {
        encrypt(s);
        cout<<endl;
    }
    return 0;
}
