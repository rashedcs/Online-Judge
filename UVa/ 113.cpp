#include<bits/stdc++.h>
using namespace std;


int main()
{
    double n, k, p;
    
    while(cin>>n>>p)
    {
        k = pow(p, 1/n);
        printf("%.0f\n",k);
    }

    return 0;
}
