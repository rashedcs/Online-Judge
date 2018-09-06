#include<iostream>
using namespace std;

int main()
{
    int tc, n, cnt, arr[51];
    
    cin>>tc;
    while(tc--)
    {
            cin>>n;
            cnt=0;
    
            for(int i=0; i<n; i++)
            {
                cin>>arr[i];
            }
            
            for(int i=0; i<n-1; i++)
            {
                for(int j=0; j<n-1; j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                       swap(arr[j],arr[j+1]);
                       cnt++;
                    }
                }
            }
            printf("Optimal train swapping takes %d swaps.\n",cnt);
     }
     return 0;
}
