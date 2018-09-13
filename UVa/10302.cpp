#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, sum;
    while(cin>>n)
    {
        sum = 0;
        for(ll i=1; i<=n; i++)
        {
              sum += i*i*i;
        }
        cout<<sum<< endl;
    }
    return 0;
}
