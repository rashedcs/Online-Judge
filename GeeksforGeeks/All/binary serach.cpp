#include<bits/stdc++.h>
using namespace std;

int bin_search(int a[], int l, int h, int k)
{
     int mid=l+(h-1)/2;
     
     if(l<=h)
     {
         if(a[mid]==k)      return mid;
         else if(a[mid]>k)  return bin_search(a,l,mid-1,k);
         else               return bin_search(a,mid+1,h,k);
     }
     else                   return -1;
}


int main()
{
    
    int a[100],tc,num,k,temp;
    
    cin>>tc;
    while(tc--)
    {
        cin>>num;
        for(int i=0; i<num; i++)
        {
            cin>>a[i];
        }
        cin>>k;
        
        temp=bin_search(a,1,num,k);
        
        if(temp!=0)    cout<<temp-1<<endl;
        else           cout<<temp<<endl;
    }
   return 0; 
}


void bin_search(int a[], int l, int h, int k)
{
     int flag=0,mid;
     
     while(l<=h)
     {
          mid=(l+h)/2;
          if(a[mid]==k)      { flag=1;break; }
          else if(a[mid]>k)  h=mid-1;
          else               l=mid+1;
     }
    if(flag==0)    cout<<mid<<endl;
    else           cout<<"-1"<<endl;
}

