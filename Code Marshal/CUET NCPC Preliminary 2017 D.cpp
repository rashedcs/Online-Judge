//Problems Links : https://algo.codemarshal.org/contests/cuet-ncpc-2017-preli

#include <bits/stdc++.h>

int main()
{
    long  i,a1,d1,k1,a2,d2,k2,t,sum1,sum2,n1,n2,sum;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld %ld %ld %ld %ld %ld",&a1,&d1,&k1,&a2,&d2,&k2);
        n1=a1+(k1-1)*d1;
        n2=a2+(k2-1)*d2;
        sum1=((k1*(a1+n1))/2);
        sum2=((k2*(a2+n2))/2);
        sum=(sum1+sum2);
        printf("Case %ld: %ld\n",i,sum);

    }
    return 0;
}
