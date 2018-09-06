#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tc,i,max,a,b,c,cnt=1;
  
  cin>>tc;
  while(tc--)
  {
    cin>>a>>b>>c;
    if(a<=200 && b<=200 && c<=200)
    {
      max = (a>b && a>c)? a:b>c? b:c;
      cout<<"Case "<<cnt++<<": "<<max<<endl;
    }
  }
  
  return 0;
}
