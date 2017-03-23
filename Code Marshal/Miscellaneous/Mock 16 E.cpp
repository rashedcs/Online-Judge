#include<bits/stdc++.h>
using namespace std;


int main()
{
 int tc, n, cnt=0;
 double ma, mi;
 float sum, fum;
 vector<int>v;
 cin>>tc;
 for(int i=0; i<tc; i++)
 {
    cnt++;
    cin>>n;
    v.push_back(n);

    if(i==0)
    {
       fum = n/n;
       cout<<"Case "<<cnt<<": ";
       printf("%.2lf\n",fum);

    }

    else
    {
      ma = *max_element(v.begin(), v.end());
      mi = *min_element(v.begin(), v.end());

      sum = ma/mi;

      cout<<"Case "<<cnt<<": ";
      printf("%.2lf\n",sum);
    }
 }
 v.clear();
 return 0;

}
