#include <bits/stdc++.h>
 using namespace std;
 
 int main()
 {
        int tc, d, N;
        long int sum ;
        char ch[20];
 
        cin>>tc;
 
        for(int i=0; i<tc; i++)
        {
           sum = 0;
           cin>>N;
           cout<<"Case "<<i+1<<":"<<endl;
           while(N--)
           {
              cin>>ch;
              if(ch[0]=='d')
              {
                cin>>d;
                sum+=d;
              }
 
              else
              {
                cout<<sum<<endl;
              }
           }
        }
 
       return 0;
  }
 
 
