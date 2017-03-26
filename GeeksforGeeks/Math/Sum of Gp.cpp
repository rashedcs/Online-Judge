/*

Write a Program to calculate the sum of n terms of a Geometric Progression when first term a and common ratio r is given.

Input: 
The first line of the input contains T denoting the number of testcases.
The first line of the test case will be the number of terms of GP and second line its first term and common ratio.

Output: 
For each test case the output will be the sum of n terms of GP.

Constraints:

1 <= T<= 100
1 <= N <= 100
1 <= a,r <= 100

Example:

Input:

1
3
3 2

Output:

21.000000

*/

#include<bits/stdc++.h>
using namespace std;

double gp(int a, int r, int n) 
{
    if(r!=1) 
    {
        return (a*pow(r,n)-a)/(r-1);
    }
    else   
    {
        return (a*n);
    }
}

int main() 
{
	int tc, n, i, a, r;
	cin>>tc;
	
	while(tc--)
	{
	    cin>>n;
	    cin>>a>>r;
	    printf("%lf\n", gp(a, r, n));
	}
	return 0;
}

