/*

Given an array of digits (values are from 0 to 9), find the minimum possible sum of two numbers formed from digits of the array. All digits of given array must be used to form the two numbers.

Input:

The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines. The first line of each test case consists of an integer N, where N is the size of array.
The second line of each test case contains N space separated integers denoting array elements.

Output:

Corresponding to each test case, in a new line, print the minimum possible sum of two numbers formed from digits of the array.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 30
1 ≤ A[i] ≤ 9

Example:

Input
1
5
5 3 0 7 4

Output
82

*/

#include<bits/stdc++.h>
using namespace std;

int main()
 {
    int tc, n, k;
    unsigned long long a, b, sum;
    int v[30];
    cin>>tc;
    while(tc--)
    {
        a = 0, b = 0;
        cin>>n;
   
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        
        sort(v, v+n);
        
        for (int i = 0; i < n; i++)
        {
          if (i & 1)   a = a*10 + v[i];
          else         b = b*10 + v[i];
        }
        
        sum = a+b;
        cout<<sum<<endl;
     }
        
	return 0;
}
