/*

You have to merge the two sorted arrays into one sorted array (in non-increasing order)

Input:

First line contains an integer T, denoting the number of test cases.
First line of each test case contains two space separated integers X and Y, denoting the size of the two sorted arrays.
Second line of each test case contains X space separated integers, denoting the first sorted array P.
Third line of each test case contains Y space separated integers, denoting the second array Q.


Output:

For each test case, print (X + Y) space separated integer representing the merged array.


Constraints:

1 <= T <= 100
1 <= X, Y <= 5*104
0 <= Pi, Qi <= 109


Example:

INPUT:

1
4 5
7 5 3 1
9 8 6 2 0

OUTPUT:

9 8 7 6 5 3 2 1 0

*/

#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc, size1, size2, m, n;
	
	vector<int>first;
	vector<int>second;
	vector<int>v;
	
	cin>>tc;
	while(tc--)
	{
	     cin>>size1>>size2;
	     for(int i=0; i<size1; i++)
	     {
	        cin>>m;
	        first.push_back(m);
	     }
	    
	     for(int i=0; i<size2; i++)
	     {
	        cin>>n;
	        second.push_back(n);
	    }

       merge (first.begin(),first.end(),second.begin() ,second.end(), back_inserter(v));
       
       sort(v.begin(), v.end(), [] (int a, int b) { return a>b;} ); 
       
       for(int n=0; n<v.size(); n++)
       {
         cout<<v[n]<<" ";
       }
         


             cout<<endl;
             v.clear();
             first.clear();
            second.clear();
         
    
   	}
	return 0;
}
