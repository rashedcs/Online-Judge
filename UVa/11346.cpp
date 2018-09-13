#include<bits/stdc++.h>
using namespace std;

void area(double xb, double yb, double s)
{
        double ans, xa, area=s,  ya=yb, tot = (xb*yb);
        
        if(tot<s)   
        {
            ans=0;
        }
        else if(s==0) 
        {
            ans=100;
        }
        else
        {
            xa = area/ya;
            area += s*(log(xb)-log(xa));
            ans = (1.0 - (area/tot) )*100;
        }
        printf("%.6lf%%\n",ans);
}

int main() 
{
    int tc;
    double xb, yb, s;
    cin>>tc;
    while(tc--) 
    {
        cin>>xb>>yb>>s;
        area(xb, yb, s);
    }
    return 0;
}

