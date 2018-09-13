#include<bits/stdc++.h>
using namespace std;


int digit(int n)
{
        int res=n;
        while(res%10!=res)
        {
            n=res;
            res=0;
            while(n)
            {
                res+=n%10;
                n/=10;
            }
        }
        return res;
}


int main()
{
    int n;
    while(cin>>n &&n)
    {
        printf("%d\n",digit(n));
    }
    return 0;
}
