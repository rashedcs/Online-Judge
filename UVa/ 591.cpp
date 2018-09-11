#include<bits/stdc++.h>
using namespace std;


int mean(int arr[], int n)
{
        int  sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += arr[i];
        }
        return sum/n;
}


int main()
{
    int n, avg, mov, cnt=0;
    int arr[60];
    
    while(cin>>n && n)
    {
        mov = 0;
            
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        
        avg = mean(arr, n);
        
        printf("Set #%d\n", ++cnt);
        
        for(int i=0; i<n; i++)
        {
            if(arr[i] > avg)
            {
                mov += arr[i] - avg;
            }
        }
        printf("The minimum number of moves is %d.\n\n",mov);

    }
    return 0;
}
