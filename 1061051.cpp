#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    long long tc, w;
    scanf("%lld", &tc);
 
   for(int t=1; t<=tc; t++)
    {
        scanf("%lld",&w);
        if(w&1) //if(w%2!=0)
        {
             printf("Case %lld: Impossible\n",t);
        }
        else
        {
            for(long long i=2; i<=w/2; i+=2)
            {
                if(w%i==0 && w/i%2==1)
                {
                    printf("Case %lld: %lld %lld\n",t,w/i,i);
                    break;
                }
            }
        }
    }
 
    return 0;
}
