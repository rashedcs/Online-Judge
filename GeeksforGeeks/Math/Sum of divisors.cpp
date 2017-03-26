/*

Given a natural number, calculate sum of all its proper divisors. A proper divisor of a natural number is the divisor that is strictly less than the number.

For example, number 20 has 5 proper divisors: 1, 2, 4, 5, 10, and the divisor summation is: 1 + 2 + 4 + 5 + 10 = 22.

Examples:

Input : num = 10
Output: 8
// proper divisors 1 + 2 + 5 = 8 

Input : num = 36
Output: 55
// proper divisors 1 + 2 + 3 + 4 + 6 + 9 + 12 + 18 = 55 
Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N.

Output:
Print sum of divisors of N.


Constraints:
1 ≤ T ≤ 200
2 ≤ N ≤ 1000

Example:
Input:
2
6
10

Output:
6
8



*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc, num, sum;
	cin>>tc;
	while(tc--)
	{
	    sum = 0;
	    cin>>num;
	    for(int i=1; i<num; i++)
	    {
	        if(num%i==0) sum = sum + i;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
