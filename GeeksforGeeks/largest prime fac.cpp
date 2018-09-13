#include <bits/stdc++.h>
using namespace std;
#define N 1000002

bool visit[N];
vector<int> prime;

int main() {
	//code
	memset( visit , 0 , sizeof(visit));
	for( int i=2;i<N;i++ )
	{
	    if( visit[i] == 0)
	    {
	        prime.push_back(i);
	        for( int j=i*2;j<N;j=j+i )
	        {
	            visit[j] = 1;
	        }
	    }
	}
	
	    long long n;
	    cin>>n;
	    
	    long long res = n;
	    for( int i=0;i<prime.size();i++ )
	    {
	        if( prime[i] > n )
	            break;
	            
	        while( n%prime[i] == 0 )
	        {
	            n=n/prime[i];
	            res = prime[i];
	        }
	    }
	    if( n>res )
	        cout<<n<<endl;
	    else
	        cout<<res<<endl;
	
	    return 0;
}
