#include<bits/stdc++.h>
using namespace std;

int solution(int a, int b)
{
        int cnt, x, maxc=0;
        for(int i=a; i<=b; i++)
        {
            x = i;
            cnt = 1;
            while(x != 1 ) 
            {
                if(x%2!=0) x = 3*x+1;
                else       x = x/2;
                cnt++;
            }
            if(cnt > maxc) maxc = cnt;
        }
        return maxc;
}

int main()
{
    int a, tempa, tempb, b;
    while(cin>>a>>b)
    {
        tempa = a, tempb = b;
        
        if(a>b) 
        {
          swap(a,b);
        }     
        cout<<tempa<<" "<<tempb<<" "<<solution(a, b)<<endl;
    }
   return 0;
}
