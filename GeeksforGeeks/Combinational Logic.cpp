/*

Construct a 6 input gate which performs the following logical operation:
 (not(A)).B + C.D +E.(not(F))
where A, B, C, D, E and F are the inputs to the 6 input gate.

 

Input:
The first line of input takes the number of test cases, T. Then T test cases follow. Each test case takes 6 space separated integers denoting the inputs to the 6 input gate, A, B, C, D,E and F.

Note: the inputs can be either 1's or 0's.
 

Output:
Print the output of the 6 input gate for each test case on a new line.
 

Constraints:
1<=T<=100
0<=A,B,C,D<=1
 

Example:
Input:
3
1 1 0 0 1 1
1 1 1 1 1 1
1 0 0 1 1 1

Output:
0
1
0

Explanation:

In the first test case, A=1, B=1, C=0, D=0, E=1, F=1 so (not(A)).B + C.D +E.(not(F)) = 0.1 + 0.0 + 1.0 = 0 + 0 + 0 = 0

In the second test case, A=1, B=1, C=1, D=1, E=1, F=1. so (not(A)).B + C.D +E.(not(F)) = 0.1 + 1.1 + 1.0 = 0 + 1 + 0 = 1

In the third test case, A=1, B=0, C=0, D=1, E=1, F=1. so (not(A)).B + C.D +E.(not(F)) = 0.0 + 0.1 + 1.0 = 0 + 0 + 0 = 0

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc, a, b, c, d, e, f, sum;
    cin>>tc;

    while(tc--)
    {
       cin>>a>>b>>c>>d>>e>>f;

       a = a ^ 1;
       f = f ^ 1;

       sum = a&b | c*d | f&e;

       cout<<sum<<endl;
    }

   return 0;
}



