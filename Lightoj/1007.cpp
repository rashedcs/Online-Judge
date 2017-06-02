#include<stdio.h>
 #define max 5000009
 
 unsigned long long phi[max];
int main()
 {
  unsigned   long long i,j;
   for(i=2;i<max;i++){
    if(phi[i]==0){
        phi[i]=i-1;
 
        for(j=i*2;j<max;j=j+i){
                if(phi[j]==0){
 
            phi[j]=j;
                }
            phi[j]=phi[j]-(phi[j]/i);
        }
      }
    }
   unsigned   long long s,d=0;
     for(s=2;s<max;s++){
       phi[s]= phi[s]*phi[s];
         phi[s]=phi[s]+phi[s-1];
      }
     unsigned long long a,b,x,test,u;
      scanf("%llu",&test);
       for(u=1;u<=test;u++){
        scanf("%llu %llu",&a,&b);
          printf("Case %llu: %llu\n",u,phi[b]-phi[a-1]);
      
