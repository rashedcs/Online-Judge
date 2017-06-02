#include<bits/stdc++.h>
using namespace std;
 
const double PI=acos(-1.0);  
 
int main ()  
{  
    int T,a,b;  
    cin>>T;  
    for (int cas=1;cas<=T;cas++)  
    {  
        scanf("%d : %d",&a,&b);  
        double alpha=atan(1.0*a/b);  
        double R=200.0/(2.0*sin(alpha)+(PI-2*alpha));  
        printf("Case %d: %.8lf %.8lf\n",cas,2*R*sin(alpha),2*R*cos(alpha));  
    }  
    return 0;  
}
