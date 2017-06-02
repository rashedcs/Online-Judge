#include<stdio.h>
int main()
{
    int t,i=1,a,b,c;
    scanf("%d",&t);//taking test case
    while(i<=t)
    {
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("Case %d: %d\n",i,c);
        i++;
    }
    return 0;
}
