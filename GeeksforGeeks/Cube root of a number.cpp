/*

Given a number n, find the cube root of n.

Note: We need to print the floor value of the result.

Input:

The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of one line. The first line of each test case consists of an integer n.
 

Output:

Corresponding to each test case, in a new line, print the cube root of n ( if the answer is in decimal, print its floor value).

Constraints:

1 ≤ T ≤ 100
1 ≤ n ≤ 100000

Example:

Input
2
3
8

Output
1
2

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n;
    double r;
    cin>>tc;
    while(tc--)
    {
        r = 0;
        cin>>n;
        r = pow(n,1.0/3.0);
        cout<<(int)r<<endl;
    }
    return 0;
}
