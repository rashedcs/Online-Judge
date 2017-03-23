#include<stdio.h>

int main()
{
	int t,a,b,n,max,r=1,i,sum;
	scanf("%d",&t);
	while(t--)
        {
		scanf("%d",&n);
		sum=0;
		max=0;
		for(i=1;i<n;i++)
                {
			scanf("%d%d",&a,&b);
			sum-=b;
			sum+=a;
			if(max<sum) max = sum;
		}
		printf("Case %d: %d\n",r++,max);
	}
	return 0;
}
