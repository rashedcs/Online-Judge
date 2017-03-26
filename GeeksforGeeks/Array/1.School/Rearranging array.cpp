/*
Given a list of integers, rearrange the list such that it consists of alternating minimum maximum elements using only
list operations. The first element of the list should be minimum and second element should be maximum of all elements
present in the list. 
Similarly, third element will be next minimum element and fourth element is next maximum element and so on. Use of extra space is not permitted

Input:
The first line of input contains a single integer T denoting the number of test cases. 
Then T test cases follow. Each test case consist of two lines. The first line of each test case consists of an integer N, where N is the size of array.The second line of each test case contains N space separated integers denoting array elements.
 

Output:
Corresponding to each test case, in a new line, print the modified list.
 

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 200
1 ≤ A[i] ≤ 500

Example:

Input
2
5
4 5 1 2 3
4
1 2 3 4

Output
1 5 2 4 3
1 4 2 3

*/
#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int tc, num, temp, kemp, arr[500];
	
	cin>>tc;
	while(tc--)
	{
	    cin>>num;
	    temp = num-1;
	    kemp = 0;
	    for(int i=0; i<num; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    sort(arr, arr+num);
	    
	    for(int i=0; i<num; i++)
	    {
	        
	        if(i==0 || i%2==0)
	        {
	            cout<<arr[kemp]<<" ";
	            kemp++;
	        }
	        
	        else if(i%2==1)  
	        {
	            cout<<arr[temp]<<" ";
	            temp--;
	        }
	
	    }
	    cout<<endl;
	}
	return 0;
}
