
//Source : http://ideone.com/Eklh2D
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, tc, num, sum, cnt=1;
  
  cin>>tc;
  while(tc--)
  {
    sum=0;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
      cin>>a;
      sum+=a;
    }
    cout<<"Case "<<cnt++<<": "<<sum/num<<endl;
  }

  return 0;
}
