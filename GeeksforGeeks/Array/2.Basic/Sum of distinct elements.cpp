/*

Find the sum of all non- repeated elements in an array.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N, N is the size of array.
The second line of each test case contains N input C[i].

Output:

Print the sum of all non-repeated elements.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 500
0 ≤ C[i] ≤ 1000

Example:

Input:
3
5
1 2 3 4 5
5
5 5 5 5 5
4
22 33 22 33

Output:
15
5
55

*/


#include <bits/stdc++.h>
using namespace std;



    int main()
    {
        int tc, num, key, sum;
        vector<int>v;
        cin>>tc;

        while(tc--)
        {
           sum = 0;
           cin>>num;
           for (int i=0; i<num; i++)
           {
               cin>>key;
               v.push_back(key);
           }

           sort(v.begin(), v.end());
           v.erase(unique(v.begin(), v.end()), v.end());


           for(int i=0; i<v.size(); i++)
           {
              sum = sum + v[i];
           }

           cout<<sum<<endl;

           v.clear();

         }
        return 0;
    }
