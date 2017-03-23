#include<bits/stdc++.h>
using namespace std;



int main()
{
    int tc,n,g, k, M, sum,temp, cnt=0;
    cin>>tc;
    while(tc--)
    {
      cnt++;
      sum =0;
      cin>>n>>k>>M;

      if(M==100)
      {
        sum = pow(2,5);
      }

      else if(M==1000)
      {
        temp = pow(k,7);
        sum  = (temp%M)*k;
      }

      else if(M==10000)
      {
        temp = pow(k,13);
        sum  = (temp%M)*k;
      }

      else
      {
        g = 3*n - 2;
        temp = pow(k,g);
        sum  = (temp%M)*k;
      }
      cout<<"Case "<<cnt<<": "<<sum<<endl;

    }

    return 0;
}
