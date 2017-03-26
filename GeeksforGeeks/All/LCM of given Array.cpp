#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc, lcm, temp, kemp, num,arr[20];
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
	        temp = arr[i];
	        kemp = arr[i+1];
	        lcm = (temp*kemp) / (__gcd(temp,kemp));
	        arr[i+1]=lcm;
	    }
	    cout<<arr[num-1]<<endl;

	}
	return 0;
}
