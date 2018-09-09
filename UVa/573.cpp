#include<bits/stdc++.h>
using namespace std;


int main()
{
    double h, u, d, f, sum;
    while(cin>>h>>u>>d>>f && h)
    {
        int cnt=0;
        f = (u*f)/100.0;
        sum = 0;
        while(true)
        {
            cnt++;
            
            (u>0)? sum += u: sum += 0;
            
            u -= f;
            if(sum>h)
            {
                cout<<"success on day "<<cnt<<endl;
                break;
            }
            
            sum -= d;
            if(sum<0) 
            {
                 cout<<"failure on day "<<cnt<<endl;
                 break;
            }
        }
    }
    return 0;
}
