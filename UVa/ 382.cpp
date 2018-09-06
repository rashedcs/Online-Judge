#include<bits/stdc++.h>
using namespace std;


void determine(int num)
{
            int sum=0;
            
            for(int i=1; i<num; i++)
            {
                if(num%i==0)
                {
                      sum += i;
                }
            }
            if(num == sum)
                printf("%5ld  PERFECT\n",num);
            else if(num<sum)
                printf("%5ld  ABUNDANT\n",num);
            else if(num>sum)
                printf("%5ld  DEFICIENT\n",num);
}
    
int main()
{
    long int num;
    printf("PERFECTION OUTPUT\n");
    while(1)
    {
        cin>>num;
        if(num==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else
        {
           determine( num);
        }

    }
    return 0;
}
