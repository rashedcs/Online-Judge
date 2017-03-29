
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
 
	int n,m,l,r,k, *arr, *brr;
	cin>>n>>m;
	arr = new int[n];
	brr = new int[n+1];
 
	brr[0]=0;
 
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		brr[i+1] = brr[i] + arr[i];
	}
 
	while(m--)
	{
		cin>>l>>r>>k;
		int x=-1;
		l--;r--;
		int mid=(l+r)/2;
 
		for(int i=l; i<=r-k+1; i++)
		{
			if( (brr[i+k]-brr[i])==arr[mid]*k )
			{
				x=arr[mid];
				break;
			}
		}
		cout<<x<<endl;
	}
	free(arr);
	free(brr);
 
	return 0;
} 
