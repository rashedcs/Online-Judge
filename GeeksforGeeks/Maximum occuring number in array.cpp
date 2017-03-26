#include<stdio.h>
int main()
{
    int n,input;
    scanf("%d",&n);
    int count[201] ={0};
    int max=0,found=-1;

    for(int i=0;i<n;i++)
    {
         scanf("%d",&input);
         count[input+100]++;
         if(max<count[input+100])
         {
            max= count[input+100];
            found=input;
         }
    }
    printf("%d",found);
    return 0;
}
