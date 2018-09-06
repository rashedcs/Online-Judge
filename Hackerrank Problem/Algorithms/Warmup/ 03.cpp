#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios::sync_with_stdio(false);
    int n; 
    cin>>n;
    ll *arr = new ll[n];
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<sum<<endl;
    free(arr);
    return 0;
}

