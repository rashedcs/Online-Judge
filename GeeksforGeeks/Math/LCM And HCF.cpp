/*

For 2 given numbers find out their LCM and HCF.

Input:
The first line contains an integer 'T' denoting the total number of test cases. 
In each test cases, there are two numbers a and b.


Output:
Find LCM and HCF. 


Constraints:
1 <= T <= 30
1 <= a <= 1000
1 <= b <= 1000


Example:
Input:
2

5 10

14 8

Output:
10 5
56 2
**For More Examples Use Expected Output**

*/

#include<bits/stdc++.h>
using namespace std;

    int main()  
     {  
        int a,b,tc,gcd,lcm;
        cin>>tc;
        while(tc--)
        {
          cin>>a>>b;  
          gcd = __gcd(a,b);  
          lcm = (a*b)/gcd;
          cout<<lcm<<" "<<gcd<<endl; 
        }
        return 0;  
     }  






