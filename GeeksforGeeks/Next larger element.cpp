/*

Given an array A [ ] having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array. If no such element exists, output -1 

Input:
The first line of input contains a single integer T denoting the number of test cases.Then T test cases follow. Each test case consists of two lines. The first line contains an integer N denoting the size of the array. The Second line of each test case contains N space separated positive integers denoting the values/elements in the array A[ ].
 
Output:
For each test case, print in a new line, the next greater element for each array element separated by space in order.

Constraints:
1<=T<=100
1<=N<=1000
1<=A[i]<=1000

Example:
Input
1
4
1 3 2 4 

Output
3 4 4 -1

Explanation
In the array, the next larger element to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? since it doesn't exist hence -1.

*/

#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc, num, k, next;
	vector<int>v;

	cin>>tc;
	while(tc--)
	{
	    cin>>num;
	    for(int i=0; i<num; i++)
	    {
	     cin>>k;
	     v.push_back(k);
	    }


       for (int i=0; i<num; i++)
       {
          next = -1;
          for (int j=i+1; j<num; j++)
          {
            if (v[i]<v[j])
            {
                next = v[j];
                break;
            }
          }
          cout<<next<<" ";
       }
       cout<<endl;
       v.clear();

	}
	return 0;
}
