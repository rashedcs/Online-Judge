/*

Given a number N, print all its unique prime factors in increasing order.

Input : N = 100
Output: 2 5

Input : N = 35
Output: 5 7
Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N.

Output:
Print all prime factors in increasing order.

Constraints:
1 ≤ T ≤ 200
2 ≤ N ≤ 10000

Example:
Input:
2
100
35

Output:
2 5
5 7

*/



#include <bits/stdc++.h>
using namespace std;



  void primeFactor(int x)
  {
       bool isPrime = true;
       int cnt = 0;
       
       for(int i=2; i<=(x/2); i++)
         {
            for(int k=2; k<=(x/2); k++)
            {
               if((i!=k) && (i%k==0))
               {
                 isPrime = false;
                 break;
               }
            }

           if(isPrime!=0 && x%i==0)  
           {
               cout<<i<<" ";
               cnt++;
           }
           
           isPrime = true;
         }
         if(cnt==0)  cout<<x;
         
  }


int main()
{
    int tc, num;
    cin>>tc;
    while(tc--)
    {
      cin>>num;
      primeFactor(num);
      cout<<endl;
    }
    return 0;
}















#include <bits/stdc++.h>
using namespace std;



    int main()
    {
        int tc, num;

        cin>>tc;

        while(tc--)
        {
           vector<int>v;
           cin>>num;
           for (int i=2; i<=num; i++)
           {
               while(num%i == 0)
               {
                   num /= i;
                   v.push_back(i);
                   //cout <<i<<" "<<flush;
               }
           }

            v.erase(unique(v.begin(), v.end()), v.end());

           for(int i=0; i<v.size(); i++)  cout<<v[i]<<" "<<flush;

           v.clear();
           cout<<endl;
         }
        return 0;
    }
