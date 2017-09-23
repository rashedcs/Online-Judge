/*
Shortest path from 1 to n
Show Topic Tags      
Consider a directed graph whose vertices are numbered from 1 to n. There is an edge from a vertex i to a vertex j iff either j = i + 1 or j = 3i. The task is to find the minimum number of edges in a path in G from vertex 1 to vertex n.

Input:  
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.

Each test case contains a value of n. 

Output:  
Print the number of edges in the shortest path from 1 to n.

Constraints:
1<=T<=30
1<=n <=1000

Example:
Input:
2
9
4

Output:
2
2

*/
#include<bits/stdc++.h>
using namespace std;


int main()
{  
    ios::sync_with_stdio(false);
    int tc, n, cnt;
    
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        cnt=0;
        while(n!=1)
        {
             (n%3==0)?    n=n/3 :  n--;
            
             cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
