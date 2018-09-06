#include<bits/stdc++.h>
using namespace std;


int main() 
{
    ios::sync_with_stdio(false);
    int n, sum1=0, sum2=0;   
    cin>>n;
    int matrix[n][n];
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
      {
        cin>>matrix[i][j];            
        if(i==j)               sum1 += matrix[i][j];     
        if(i == n-j-1)         sum2 += matrix[i][j];         //if((i+j)==(n-1))
      }             
   }

   cout << abs(sum1-sum2);  
   return 0;
}
