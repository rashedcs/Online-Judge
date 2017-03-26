/*

Given an integer array and an element x, find if element is present in array or not. If element is present, then print index of its first occurrence. Else print -1.

Input:

First line contains an integer, the number of test cases 'T' Each test case should contain an integer, size of array 'N' in the first line.
In the second line Input the integer elements of the array in a single line separated by space. 
Element X should be inputted in the third line after entering the elements of array.

Output:

print the output in a separate line returning the index of the element X.If element not present then print -1.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Arr[i] <= 100

Example:
Input:
1
4
1 2 3 4
3

Output:
2

Explanation:
There is one test case with array as {1, 2, 3 4} and element to be searched as 3.  Since 3 is present at index 2, output is 2

*/

 #include <bits/stdc++.h>  
    using namespace std;  
      
    int main()  
     {  
         int str[1000];  
         int flag,temp ,tc,len,num;
         
         cin>>tc;
         while(tc--)
         {
             // int arr[ 5 ] = { 4, 1, 3, 2, 6 }, x;
             // x = find(3).arr ; 
               flag=0;
               cin>>len;
               for(int i=1; i<=len; i++)  
               {
                   cin>>str[i];
               }
               
               cin>>num;
             
               for(int i=1; i<=len; i++)  
               {  
                 if(str[i]==num)  
                 {  
                    flag++;  
                    temp=i-1;
                    break;
                 }  
               }  
             
            if(flag==0)   cout<<"-1"<<endl;  
            else          cout<<temp<<endl;
         }
        return 0;  
     }  





