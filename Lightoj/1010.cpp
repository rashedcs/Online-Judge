#include<bits/stdc++.h>
int main()
{
    int m,b,n,a[4]={0,2,4,4},T,c=1;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&m,&n);
        if(m==1||n==1)
            b=m*n;
        else if(m==2||n==2){
            b=m==2?n:m;
            b=(b/4)*4+a[b%4];
        }
        else
            b=(int)ceil(m*n/2.0);
        printf("Case %d: %d\n",c++,b);
    }
    return 0;
}
