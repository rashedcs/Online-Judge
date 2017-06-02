#include<bits/stdc++.h>
#define mx 100005
using namespace std;
int arr[mx];
int tree[mx*3];
 
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node]=min(tree[Left],tree[Right]);
}
 
int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b) return mx;
    if(b>=i&&e<=j) return tree[node];
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(Left,b,mid,i,j);
    int p2=query(Right,mid+1,e,i,j);
    return min(p1,p2);
}
 
int main()
{
    int t;
    cin>>t;
    for(int a=1;a<=t;a++)
    {
        int n,q;
        scanf("%d%d",&n,&q);
        for(int b=1; b<=n; b++)
            scanf("%d",&arr[b]);
 
 
        init(1,1,n);
        printf("Case %d:\n",a);
        for(int b=1; b<=q; b++)
        {
            int i,j;
            scanf("%d%d",&i,&j);
            printf("%d\n",query(1,1,n,i,j));
        }
    }
    return 0;
}
 
