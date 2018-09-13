#include <bits/stdc++.h>
using namespace std;
#define N 10001

typedef long long ll;
bool visit[N];
vector<int> prime;


void sieve()
{
        	memset( visit , 0 , sizeof(visit));
        	for( int i=2;i<N;i++ )
        	{
        	    if( visit[i] == 0)
        	    {
        	        prime.push_back(i);
        	        for( int j=i*2; j<N; j=j+i )
        	        {
        	            visit[j] = 1;
        	        }
        	    }
        	}	
}

void sol(long long n, vector<int>&prime)
{
            ll ans = n;
    	    for(int i=0; i<prime.size() || prime[i]>n; i++)
    	    {
    	        while(n%prime[i]==0)
    	        {
    	            n=n/prime[i];
    	            ans = prime[i];
    	        }
    	    }
    	    ans = max(ans, n);
    	    cout<<ans<<endl;
}

int main() 
{
           ll tc, n;
           sieve();
           cin>>tc;
           while(tc--) 
           {
	          cin>>n;
	          sol(n, prime);
           }
           return 0;
}




