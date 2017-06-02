#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <queue>
#include <map>
using namespace std;
map<string,int> mp;
char mon[20][25]={"January",
 "February", "March", "April",
  "May", "June", "July", "August",
   "September", "October", "November",
   "December"};
int main()
{
   // freopen("in.txt","r",stdin);
    for(int i=0;i<12;i++)
    mp[mon[i]]=i+1;
    int cas,T=1;
    scanf("%d",&cas);
    int y,m,t1,t2;char a[25];
    while(cas--)
    {
        scanf("%s%d,%d",a,&m,&y);
        t1=t2=0;
        if((y%400==0)||(y%100!=0&&y%4==0))
        {
            if(mp[a]>2)
            y++;
        }y--;
        t1+=(y/4-y/100+y/400);
        scanf("%s%d,%d",a,&m,&y);
        if((y%400==0)||(y%100!=0&&y%4==0))
        {
            if(mp[a]>2||(mp[a]==2&&m==29))
            y++;
        }y--;
        t2+=(y/4-y/100+y/400);
        printf("Case %d: %d\n",T++,t2-t1);
    }
    return 0;
}
 
