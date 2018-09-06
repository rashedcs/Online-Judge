#include<bits/stdc++.h>
using namespace std;

int main()
{
     int tc,cnt=1;

     char s[256];

     scanf("%d%*c",&tc);

     while(tc--)
     {
       gets(s);
       for(int i=0; i<strlen(s);i++)
       {
         s[i]=toupper(s[i]);
       }
      cout<<"Case "<<cnt++<<": "<<s<<endl;
     }
     return 0;
}
