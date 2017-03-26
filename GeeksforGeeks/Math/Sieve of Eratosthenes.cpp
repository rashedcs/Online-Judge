/*

Given a number n, calculate the prime numbers upto n using Sieve of Eratosthenes.  

Input: The first line of the input contains T denoting the number of testcases. First line of test case is the number to which we have to compute prime numbers.
Output: All the prime numbers upto or equal to n are displayed.
Constraints:
1 <=T<= 100
1 <=N<= 10000
Example:

Input:
2
10
35

Output:
2 3 5 7
2 3 5 7 11 13 17 19 23 29 31 


*/


Best Code :
#include<bits/stdc++.h>
using namespace std;


void sieve(int MAX)
{
    bool *prime = new bool[MAX];      //  http://ideone.com/RUdNpk this link use int instead of bool
    memset(prime, 0, sizeof(prime));  // It is good to use int instead of bool 

    for(int i=2; i*i<=MAX;i++)
    {
        if(prime[i]==0)
        {
           for(int j=2*i; j<=MAX; j+=i)
           {
             if(prime[j]==0)  prime[j]=i;
           }
        }
    }

    for (int p=2; p<=MAX; p++)
    {
        if (!prime[p])
        {
            cout<<p<<" ";
        }
    }
    cout<<endl;

}


int main()
{
	int tc, num;
	cin >> tc;
	while(tc--)
	{
	    cin>>num;
	    sieve(num);
	}
	return 0;
}


















































































































































































/*



#include<bits/stdc++.h>
using namespace std;

void sieve(int num)
{
    long long sum = 0;
    bool prime[num+1];
    memset(prime, true, sizeof(prime));
    
    for (int p = 2; p*p<=num; p++)
    {
        if (prime[p] == true)
        {
            for(int i = p*2; i <= num; i = i + p)
            prime[i] = false;
        }
    }
    
    
    for (int p = 2; p<=num; p++)
    {
        if (prime[p])
        {
            cout<<p<<" ";
        }
    }
    
    cout<<endl;
}



int main() 
{
	int tc, num;
	cin >> tc;
	while(tc--)
	{
	    cin>>num;
	    sieve(num);
	}
	return 0;
}























#include<bits/stdc++.h>
using namespace std;



void sieve(int MAX)
{
   bool prime[MAX]={1};

    for(int i=2; i*i<=MAX;i++)
    {
        if(prime[i]==0)
        {
           for(int j=2*i; j<=MAX; j+=i)
           {
             if(prime[j]==0)  prime[j]=i;
           }
        }
    }

    for (int p = 2; p<MAX; p++)
    {
        if (!prime[p])
        {
            cout<<p<<" ";
        }
    }
    cout<<endl;

}


int main()
{
	int tc, num;
	cin >> tc;
	while(tc--)
	{
	    cin>>num;
	    sieve(num);
	}
	return 0;
}




*/
