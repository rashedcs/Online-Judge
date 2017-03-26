/*

Calculate the factorial for a given number.

Input:
The first line contains an integer 'T' denoting the total number of test cases.
In each test cases, it contains an integer 'N'.


Output:
In each seperate line output the answer to the problem.
 
Constraints:
1<=T<=101
0<=N<=100


Example:
Input:
1
1

Output:
1

*/



#include<bits/stdc++.h>
using namespace std;
#define MAX 500


void factorial(int n)
{
    int carry , res[MAX];

    res[0] = 1;
    int res_size = 1;

    for (int x=2; x<=n; x++)
    {
        carry = 0;

        for (int i=0; i<res_size; i++)
        {
          int prod = res[i]*x + carry;
          res[i] = prod % 10;
          carry  = prod/10;
        }

        while (carry!=0)
        {
          res[res_size++] = carry%10;
          carry = carry/10;

        }
     }

    for (int i=res_size-1; i>=0; i--)  cout<<res[i];
}



int main()
{
    int n,tc;
    cin>>tc;
    while(tc--)
    {
      cin>>n;
      factorial(n);
      cout<<endl;
    }
    return 0;
}
