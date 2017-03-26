/*

Two friends are playing a game. One gives an integer N  to other and asks: What is the number of divisors of N that are divisible by 3? The task is to help the other friend in finding the number of divisors.

Input:
The first line of input contains an integer T denoting the number of test cases.
Then T test cases follow .Each test case consist of an integer N.

Output:
For each test case in a new line print the  number of divisors.

Constraints:
1 ≤ T ≤ 50
1 ≤ N ≤ 100000


Example:

Input:

2
6
10

Output:
2
0

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,num,cnt;
    cin>>tc;
    while(tc--)
    {
        cnt=0;
        cin>>num;
        for(int i=1; i<=num; i++)
        {
            if(num%i==0) 
            {
                if(i%3==0) cnt++;
            }
        }
        cout<<cnt<<endl;
    }
	
	return 0;
}


