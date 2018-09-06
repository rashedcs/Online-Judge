#include<bits/stdc++.h>
using namespace std;


int main() 
{  
    int n;
    int post=0, nega=0, zero=0;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>0)      post++;
        else if(arr[i]<0) nega++;
        else              zero++;
    }
    
    cout<<fixed<< setprecision(6)<<double(post)/n<<endl<<double(nega)/n<<endl<<double(zero)/n<<endl;
    return 0;
}
