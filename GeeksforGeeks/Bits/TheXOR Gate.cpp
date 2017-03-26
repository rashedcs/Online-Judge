#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc, n,a,b,xo, co, temp ,arr[10];
    cin>>tc;
    while(tc--)
     {
        cin>>n;

        for(int i=0; i<n; i++)
        {
          cin>>arr[i];
        }

        for(int i=0; i<n; i++)
        {
          temp = (arr[i]+arr[i+1]) % 2;
          arr[i+1]= temp;
        }
        cout<<arr[n-1]<<endl;

     }

 return 0;
}
