/*

Generate all prime numbers between two given numbers.

Input:

The first line of the input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line containing two space separated integers m and n.
Output:

For every test case print all prime numbers p such that m <= p <= n, space separated. Separate the answers for each test case by a new line.

Constraints:
1<=T<=60
1 <= m <= n <= 100000,
n - m <= 100000

Example:

Input:

2

1 10

3 5

Output:

2 3 5 7

3 5

*/

#include<bits/stdc++.h>
using namespace std;

void sieve(int small , int num)
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


    for (int p = small; p<=num; p++)
    {
        if (prime[p] && p!=1)
        {
            cout<<p<<" ";
        }
    }

    cout<<endl;
}



int main()
{
	int tc, small, num;
	cin >> tc;
	while(tc--)
	{
	    cin>>small>>num;
	    sieve(small, num);
	}
	return 0;
}
