 /*
 Given an array of integers check whether there are two numbers present with given product.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N and a product p.
The second line of each test case contain N number of a[].

Output:
Print Yes if two numbers product is equal to p else No.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 200
0 ≤ a[] ≤ 1000
1 ≤ pro ≤ 2000000

Example:

Input:

2

5 2

1 2 3 4 5

8 46

5 7 9 22 15 344 92 8

Output:

Yes

No

*/
 
 
 
 
 #include<bits/stdc++.h>
 using namespace std;


 int main()
 {
      int n, k, cnt, tc;
      cin>>tc;
      while(tc--)
      {
         cnt=0;
         cin>>n>>k;
         int arr[n];

         for(int i=0; i<n; i++)
         {
           cin>>arr[i];
         }

         for(int i=0; i<n; i++)
         {
           for(int j=i+1; j<n; j++)
           {
              if(arr[i]*arr[j]==k)
              {
                cnt++;
                break;
              }
           }
         }
         if(cnt)  cout<<"Yes\n";
         else     cout<<"No\n";

      }
      return 0;
  }
