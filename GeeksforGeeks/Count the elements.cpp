/*
Count the elements
Show Topic Tags          Amazon    Yatra
Given two unsorted arrays A, B. They can contain duplicates. For each element in A , count elements less than or equal to it in array B .

Time Complexity: O(n)

Input:
The first line contains a single integer T i.e. the number of test cases. The first line of each test case consists of a integer N. The second and third line of each test case consists of N spaced integers representing array A and array B respectively. 

Output: 
In one line for each element in array A print the elements less than or equal to it in array B with a comma ',' in between .

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
6
1 2 3 4 7 9
0 1 2 1 1 4
7
95 39 49 20 67 26 63 
77 96 81 65 60 36 55 
Output:
4,5,5,6,6,6
6,1,1,0,4,0,3
*/


#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios::sync_with_stdio(false);

	int tc, n, i;
	cin>>tc;
	while(tc--)
	{
	    cin>>n;
	    int a[n], b[n];

	    int has[101];
	    memset(has,0,sizeof(has));

	    for(i=0;i<n;i++)
	    {
	      cin>>a[i];
	    }

	    for(i=0; i<n; i++)
	    {
          cin>>b[i];
          has[b[i]]++;
	    }

	    for(i=1; i<=100; i++)
	    {
           has[i] = has[i-1]+has[i];
	    }

        for(i=0; i<n; i++)
        {
           cout<<has[a[i]];
           if(i!=n-1)  cout<<",";
        }
        cout<<endl;
	}
	return 0;
}
