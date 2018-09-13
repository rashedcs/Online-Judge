#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;

vi  primes;

void sieve() 
{ 
           bool visit[50000];
           memset( visit , 0 , sizeof(visit));
        	for( int i=2;i<50000;i++ )
        	{
        	    if(visit[i]==0)
        	    {
        	        primes.push_back(i);
        	        for( int j=i*2; j<50000; j=j+i )
        	        {
        	            visit[j] = 1;
        	        }
        	    }
        	}	
  
} 

vi primeFactor(int n) 
{
    vi factors;
 
    for(int i=0; primes[i]*primes[i]<=n; i++)
    {
        while(n%primes[i]==0) 
        {
            n /= primes[i];
            factors.push_back(primes[i]);
        }
    }
    if(n != 1)
        factors.push_back(n);
 
    return factors;
}
 
int main() 
{
    sieve();
    ll n;
    while(cin>>n && n)
    {
          vi arr = primeFactor(fabs(n));
          cout<<n<<" = ";

          if(n<0)
          {
              cout<<"-1 x ";
          }
          cout<<arr[0];
          for(int i=1; i<arr.size(); i++)
          {
             printf(" x %d", arr[i]);
          }
          cout<<endl;
    }
    return 0;
}
