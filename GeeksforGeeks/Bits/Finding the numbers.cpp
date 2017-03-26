/*

You are given an array A containing 2*N+2 positive numbers, out of which N numbers are repeated exactly twice and the other two numbers occur exactly once and are distinct. You need to find the other two numbers and print them in ascending order.
 

Input :
The first line contains a value T, which denotes the number of test cases. Then T test cases follow .The first line of each test case contains a value N. The next line contains 2*N+2 space separated integers.

Output :
Print in a new line the two numbers in ascending order.

Constraints :
1<=T<=100
1<=N<=10^6
1<=A[i]<=5*10^8

Example:
Input :
2
2
1 2 3 2 1 4
1
2 1 3 2

Output :
3 4
1 3

*/





#include <bits/stdc++.h>
using namespace std;



    int main()
    {
        int tc, n, size, num, temp, kemp;
        vector<int>v;
        cin>>tc;

        while(tc--)
        {
            
             cin>>n;
             size = 2*n + 2;

             for(int i=0; i<size; i++)
             {
               cin>>num;
               v.push_back(num);
             }

             sort(v.begin(), v.end());

             for(int i=0; i<size; i=i+2)
		     {

			    if(v[i]^v[i+1])
			    {
			      cout<<v[i]<<" "<<v[i+1];
			      break;
			    }
		     }

             v.clear();

             cout<<endl;
         }
        return 0;
    }
