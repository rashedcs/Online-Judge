//Source : http://ideone.com/Rn9NNO
#include <bits/stdc++.h>
using namespace std;



int main()
{
  int tc,cnt=1;
  double a, b, c, s, area;

  cin>>tc;
  while(tc--)
  {
     cin>>a>>b>>c;

     s = (a+b+c)/2;

     area=sqrt(s*(s-a)*(s-b)*(s-c));

     cout<<"Case "<<cnt++<<": "<<setprecision(10)<<fixed<<area<<endl;
   //  printf("Case %d: %.10lf\n",cnt++,area);
  }
  
  return 0;
}
 
