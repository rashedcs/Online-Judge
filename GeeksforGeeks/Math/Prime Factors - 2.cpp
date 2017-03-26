#include <bits/stdc++.h>
using namespace std;



    int main()
    {
        int tc, num;

        cin>>tc;

        while(tc--)
        {
           vector<int>v;
           cin>>num;
           for (int i=2; i<=num; i++)
           {
               while(num%i == 0)
               {
                   num /= i;
                   v.push_back(i);
                   //cout <<i<<" "<<flush;
               }
           }

            v.erase(unique(v.begin(), v.end()), v.end());

           for(int i=0; i<v.size(); i++)  cout<<v[i]<<" "<<flush;

           v.clear();
           cout<<endl;
         }
        return 0;
    }
