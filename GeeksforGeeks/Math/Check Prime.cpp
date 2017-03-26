#include<bits/stdc++.h>
using namespace std;

bool isPrime(int number)
{
    if(number<=1)    
    {
        return true;
    }
    else
    {
       for(int i=2; (i*i)<=number; i++)
       {
          if(number % i == 0 ) return false;
       }
       return true;
    }
}


int main()
{
	int tc;
	long long num;
	cin >> tc;
	while(tc--)
	{
	    cin>>num;
	    if(isPrime(num))         cout<<"Prime\n";
	    else                     cout<<"Not Prime\n";
	}
	return 0;
}










































#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,notprime,tc;

    cin>>tc;
    while(tc--)
    {
      notprime=0;
      cin>>n;
      for(i=2; i<=sqrt(n);i++)
       {
          if(n%i==0)
          {
              notprime++;
              break;
          }
      }

      if(notprime==0 && n!= 1)   cout<<"Prime"<<endl;
      else                       cout<<"Not Prime"<<endl;
    }
   return 0;
}
