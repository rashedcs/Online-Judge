/*

Given two array A and B, print intersection (or common elements) of the two array.  If no element is common in two array, then print Zero.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N and M,N is the size of array A and M is size of array B.
The second line of each test case contains N input A[i].
The third line of each test case contains M input B[i].

Output:

Print the intersecting elements.If no element is common in two array, then print "Zero" without quotes.

Constraints:

1 ≤ T ≤ 50
1 ≤ N, M ≤ 100
1 ≤ A[i], B[i] ≤ 1000

Example:

Input:2
5 3
89 24 75 11 23
89 2 4
6 5
1 2 3 4 5 6
3 4 5 6 7

Output:
89
3 4 5 6

*/



#include<bits/stdc++.h>
using namespace std;


int main ()
{
   int tc, num, num2,m,n;

   vector<int> first;
   vector<int> second;
   vector<int> v;


  cin>>tc;
  while(tc--)
  {

    
     cin>>num>>num2;

     for(int i=0; i<num; i++)
     {
        cin>>m;
        first.push_back(m);
     }

     for(int i=0; i<num2; i++)
     {
       cin>>n;
       second.push_back(n);
     }


    sort (first.begin(), first.end());
    sort (second.begin(), second.end());

    set_intersection(first.begin(), first.end(), second.begin(), second.end(), back_inserter(v));

    if (v.size() == 0) cout<<"Zero";
    
    else
    {
     for(int n=0; n<v.size(); n++)
     {
       cout<<v[n]<<" ";
     }
   }
   
    cout<<endl;
    
    v.clear();
    first.clear();
    second.clear();
  }

  return 0;
}
