/*
Given an integer, the task is to find factorial of the number.
 
Input:
The first line of input contains an integer T denoting the number of test cases.  
The first line of each test case is N,the number whose factorial is to be found
 
Output:
Print the factorial of the number in separate line.
 
Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 1000
 
Example:
Input
3
5
10
2
 
Output
120
3628800
2
*/



#include<bits/stdc++.h>
using namespace std;
#define MAX 200
 
 
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
         while (carry)
         {
           res[res_size++] = carry%10;
           carry = carry/10;
         }
      }
 
     for (int i=res_size-1; i>=0; i--)
     {
       cout<<res[i];
     }
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













#include<bits/stdc++.h>
using namespace std;

int ma = 3004;




void factorial(int arr[], int n)
{
    int carry = 0;

    if (n==0) return;
    else
    {
       for (int i=ma-1; i>=0; --i)
       {
         arr[i] = (arr[i] * n) + carry;
         carry = arr[i]/10;
         arr[i] %= 10;
       }
      factorial(arr,n-1);
    }
}


void display(int arr[])
{
    int ctr = 0;
    for (int i=0; i<ma; i++)
    {
    	if (!ctr && arr[i])			ctr = 1;
    	if(ctr)                     cout<<arr[i];
    }
    cout<<endl;
}


int main()
{
    int tc;
    int num;
    cin>>tc;
    while(tc--)
    {
      int *arr = new int[ma];
      memset(arr,0 ,ma*sizeof(int));
      arr[ma-1] = 1;
      cin>>num;
      factorial(arr,num);
      display(arr);
      delete[] arr;
    }
    return 0;
}



