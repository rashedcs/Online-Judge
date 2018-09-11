#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h, m, a, x;

    while( scanf("%lf:%lf",&h,&m)  )
    {
       if(h==0 && m== 0)
       {
           break;
       }
       else
       {
           if(m==60)  m=0;
    
           a =  abs(0.5*(60*h-11*m));
    
           x = min(360-a, a);
    
           cout<<fixed<<setprecision(3)<<x<<endl;
       }
    }
    return 0;
}
