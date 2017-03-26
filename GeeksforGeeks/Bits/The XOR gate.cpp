/*

Construct an N input XOR Gate. An XOR Gate returns 1 if odd number of its inputs are 1, otherwise 0.

Input:
The first line of input takes the number of test cases, T. 
Then T test cases follow.Each test case consists of 2 lines. 
The first line of each test case takes the number of inputs to the XOR Gate, N. The second line of each test case takes N space separated integers denoting the inputs to the  XOR Gate. Note that the inputs can be either 1's or 0's.


Output:
For each test case on a new line print the output of the N input XOR Gate.

Constraints:
1<=T<=100
1<=N<=100

Example:

Input:

3
2
1 1
3
1 0 1
4
1 1 1 0

Output:
0
0
1

*/

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc, ans, num, arr[6];

	cin>>tc;
	while(tc--)
	{
		cin>>num;

		for(int i=0; i<num; i++)
		{
		  cin>>arr[i];
        }

        for(int k=0; k<num; k++)
	    {
		      ans = ans ^ arr[k];
	    }

	    cout<<ans<<endl;
	}
	return 0;
}
