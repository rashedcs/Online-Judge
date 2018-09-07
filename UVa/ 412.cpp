#include<bits/stdc++.h>
using namespace std;

/*
int gcd(int a,int b)
{
    if(b ==0) return  a;
    else       gcd(b,a%b);
}
*/

int gcd(int a,int b)
{
    return b == 0 ? a:gcd(b,a%b);
}

void pi(int arr[], int n)
{
        double res, temp;  
        int mul, flag=0, cnt=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i] != arr[j])
                {
                    if(gcd(arr[i],arr[j]) == 1)
                    {
                        cnt++;
                    }
                    else
                    {
                        flag++;
                    }
                }
            }
        }
        if(cnt==0)
        {
            printf("No estimate for this data set.\n");
        }
        else
        {
            mul = n*(n-1)/2;
            temp = (6.0*mul)/cnt;
            res = sqrt(temp);
            printf("%.6f\n",res);
        }
}


int main()
{
    int n, arr[100];
    
    while(scanf("%d",&n)&&n)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        pi(arr, n);
    }

    return 0;
}
