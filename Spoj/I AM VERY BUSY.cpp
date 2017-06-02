//Accepted Code below :
    #include<bits/stdc++.h>
    using namespace std;


   bool comp(const pair<int,int> &a, const pair<int,int> &b)
   {
     if (a.second == b.second) return  a.first<b.first ;
     else                      return  a.second<b.second;
   }



   void activitySelection(pair<int, int>P[], int n)
   {

      sort(P, P+n, comp);
     /*
      for(int i=0; i<n; i++)
      {

        cout<<P[i].first<<" ";
        cout<<P[i].second<<"  ";
        cout<<endl;
      }
     */
     int cnt = 0, last = -1;
     for(int i=0; i<n; i++)
     {
       if(P[i].first >= last)
       {
         cnt++;
         last = P[i].second;
        // cout<<P[i].first<<" "<<P[i].second<<endl;
       }
     }
     cout<<cnt<<endl;
   }








   int main()
   {

        ios::sync_with_stdio(false);

        int tc, n, start, finish;
        cin>>tc;
        while(tc--)
        {
          cin>>n;
          pair <int,int> P[n+1];

          for(int i=0; i<n; i++)
          {
            cin>>start>>finish;
            P[i] = make_pair(start,finish);
          }

          //sort(C,C+n,comp);
          activitySelection(P,n);
        }

       return 0;
   }


















//Traditional TLE code : http://ideone.com/EO8Ojs
