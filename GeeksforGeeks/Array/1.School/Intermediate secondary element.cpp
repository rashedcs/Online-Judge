#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int tc, num, arr[500];
	cin>>tc;
	while(tc--)
	{
	    cin>>num;
	    for(int i=0; i<num; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for(int i=0; i<num; i++)
	    {
	       if(arr[i]>arr[i+1] && i!=(num-1))          cout<<arr[i+1]<<" ";
	       else if(i==(num-1 ))                       cout<<"-1"<<" ";
	       else                                       cout<<"-1"<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
