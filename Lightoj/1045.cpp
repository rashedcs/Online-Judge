#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
 
long tc,p, i,n,b;
double f[1000010];
 
int main()
{
    scanf("%d",&tc);
    for(i=1; i<=1000000; i++)
    {
        f[i]=log((i))+f[i-1];
    }
 
    for(p=1;p<=tc;p++)
    {
        cin>>n>>b;
        printf("Case %d: %ld\n",p,(long)(f[n]/(f[b]-f[b-1]))+1);
    }
    return 0;
}
