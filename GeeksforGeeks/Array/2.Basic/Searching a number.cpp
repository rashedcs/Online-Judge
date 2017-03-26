/*
Given an array of N elements and a integer K , return the position of first occurence of K in given array.  Position of first element is considered as 1.
Output -1 if the number is not found in an array.

Input:
The first line contains 'T' denoting the number of testcases. Then follows description of testcases.
Each case begins with a two space separated integer N and K denoting the size of array and the value of K respectively.
The next line contains the N space separated integers denoting the elements of array.


Output:

For each testcase, print the index of first occurence of given number K.
Print -1 if the number is not found in array.

Constraints:
1<=T<=50
1<=N<=1000
1<=K<=100000
1<=A[i]<=100000


Example:

Input :
2 
5 16
9 7 2 16 4
7 98
1 22 57 47 34 18 66

Output : 
4
-1

*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
   int arr[1000];
   int tc, num,key,temp,cnt;
   cin>>tc;

   while(tc--)
   {
     cnt=0;
     cin>>num>>key;

     for(int i=0; i<num; i++)
     {
       cin>>arr[i];
     }

     for(int i=0; i<num; i++)
     {
       if(arr[i]==key)
       {
        cnt++;
        temp = i;
        break;
       }
     }

     if(cnt)   cout<<temp+1<<endl;
     else      cout<<"-1"<<endl;
   }
   return 0;
}
