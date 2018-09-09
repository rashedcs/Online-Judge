#include<bits/stdc++.h>
using namespace std;

#define MAX 42000


void factorial(int n)
{
    int carry , res[MAX];

    res[0] = 1;
    int res_size = 1;

    for (int x=2; x<=n; x++)
    {
        carry = 0;

        for (int i=0; i<res_size; i++)
        {
          int prod = res[i]*x + carry;
          res[i] = prod % 10;
          carry  = prod/10;
        }

        while (carry)
        {
          res[res_size++] = carry%10;
          carry = carry/10;
        
        }
     }

    for (int i=0; i<res_size; i++)  
    {
        if(res[i]!=0)
        {
             cout<<res[i]<<endl;
             break;
        }
    }
}


int main()
{
    int n;
    while(cin>>n)
    {
      printf("%5d -> ",n);
      factorial(n);
    }
    return 0;
}
