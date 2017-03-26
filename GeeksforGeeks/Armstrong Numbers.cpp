/*

For a given 3 digit number, find whether it is armstrong number or not. 
An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371

Input:
First line contains an integer, the number of test cases 'T' Each test case should contain a positive integer N.


Output:
Print "Yes" if it is a armstrong number else print "No".


Constraints:
1<=T<=31
100<= N <1000


Example:
Input:
1
371

Output:
Yes

*/

#include<bits/stdc++.h>
using namespace std;

int main()
 {
    int num,rem,sum=0,temp,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>num;
        temp=num;
        while(num!=0)
        {
          rem=num%10;
          num=num/10;
          sum=sum+(rem*rem*rem);
        }
        
      if(sum==temp) cout<<"Yes"<<endl;
      else          cout<<"No"<<endl;
    }

  return 0;
 }











