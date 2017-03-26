/*

Write a program to find the sum of the given series 1+2+3+ . . . . . .(N terms) 

Input:
First line contains an integer, the number of test cases 'T' Each test case should contain a positive integer N.


Output:
Print the sum in a seperate line.


Constraints:
1<=T<=30
1<=N<=100


Example:
Input:
1
1

Output:
1

*/



    #include<bits/stdc++.h>  
    using namespace std;  
      
    int main()  
    {  
        int n, tc, sum;  
        cin>>tc;
        while(tc--)
        {
           sum=0;
           cin>>n;  
           for(int i=1;i<=n;i++)  
           {  
             sum = sum+i;  
           }  
           cout<<sum<<endl;  
        }
       return 0;  
    }  


