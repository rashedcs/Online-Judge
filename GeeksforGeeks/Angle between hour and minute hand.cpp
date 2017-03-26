/*
Calculate the angle between hour hand and minute hand.

There can be two angles between hands, we need to print minimum of two.
Also, we need to print floor of final result angle. For example, if the final angle is 10.61, we need to print 10.

 
Input:

The first line of input contains a single integer T denoting the number of test cases. 
Then T test cases follow. Each test case consists of one line conatining two space separated numbers h and m where h is hour and m is minute.

Output:
Coresponding to each test case, print the angle b/w hour and min hand in a separate line.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 12
1 ≤ A[i] ≤ 60

Example:

Input
2
9 60
3 30

Output
90
75
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{

    long double minute,hour,angle,x,tc;
    cin>>tc;

    while(tc--)
    {
       cin>>hour>>minute;

       if(minute==60)  minute=0;

       angle =  abs(0.5*(60*hour-11*minute));

       x = min(360-angle,angle);

       cout<<(int)x<<endl;
    }
    return 0;
}


    Contact GitHub API Training Shop Blog About 

