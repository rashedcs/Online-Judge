/*

LALU wanted to purchase a laptop so he went to a nearby sale.There were n Laptops at a sale. Laptop with index i costs ai rupees. Some Laptops have a negative price — their owners are ready to pay LALU if he buys their useless Laptop. LALU can buy any Laptop he wants. Though he's very strong, he can carry at most m Laptops, and he has no desire to go to the sale for the second time. Please, help LALU find out the maximum sum of money that he can earn.

Input:

First line of the input contains T denoting the number of test cases.Each test case has 2 lines :

first line has two spaced integers n m.
second line has n integers [a0...ai...an-1].
Output:

The maximum sum of money that LALU can earn, given that he can carry at most m Laptops.


Constraints:

1≤T≤10

1≤n,m≤100

-1000≤ai≤1000
 

Sample Input:

1

 5 3

-6 0 35 -2 4

Sample Output:

8

Explanation:

LALU takes the laptops with -6 and -2 and thus earns 8 rupees.



*/

#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc, n, k, sum,  arr[1000];
	cin>>tc;
	while(tc--)
	{
	    sum =0;
	    cin>>n>>k;
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    sort(arr, arr+n);
	    for(int i=0; i<k; i++)
	    {  
	        if(arr[i]>0)  sum = 0;
	        else          sum = sum - arr[i]; 
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
