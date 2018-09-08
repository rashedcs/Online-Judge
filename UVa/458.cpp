#include<bits/stdc++.h>
using namespace std;

int main()
{
   string str;

   while(cin>>str)
   {
        for(int i=0; i<str.size(); i++)
        {
           printf("%c",str[i]-7);
        }
        printf("\n");
    }
    return 0;
}

