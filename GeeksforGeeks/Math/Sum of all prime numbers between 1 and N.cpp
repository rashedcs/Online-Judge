/*

Given a positive integer N, calculate the sum of all prime numbers between 1 and N.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N.

Output:
Print the sum of all prime numbers between 1 and N.

Constraints:
1 ≤ T ≤ 50
1 ≤ N ≤ 1000000

Example:
Input:
2
5
10

Output:
10
17

*/

#include <iostream>
#include <string.h>
using namespace std;

long long sieve(int num)
{
    long long sum = 0;
    bool prime[num+1];
    memset(prime, true, sizeof(prime));
    
    for (int p = 2; p*p <= num; p++)
    {
        if (prime[p] == true)
        {
            for(int i = p*2; i <= num; i = i + p)
            prime[i] = false;
        }
    }
    
    for (int p = 2; p <= num; p++)
    {
        if (prime[p])
        {
            sum += p;
        }
    }
    
    return sum;
}



int main() 
{
	int tc, num;
	long long sum;
	cin >> tc;
	while(tc--)
	{
	    cin>>num;
	    sum = sieve(num);
	    cout << sum << endl;
	}
	return 0;
}

