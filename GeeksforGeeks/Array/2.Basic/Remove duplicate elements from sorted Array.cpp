/*

Given a sorted array, your task to complete the function remove_duplicate which removes the duplicate  elements from the array .
The function remove_duplicate takes two arguments . The first argument is the sorted array A[ ] and the second argument is 'N' the size of the array and returns the size of the new converted array A[ ] with no duplicate element .

Input  :
The first line of input contains T denoting the no of test cases . Then T test cases follow . The first line of each test case contains an Integer N and the next line contains N space separated values of the array A[ ] .

Output:
For each test case output will be the transformed array with no duplicates.

Constraints:
1<=T<=100
1<=N<=100
1<=A[ ] <=100

Example:

Input  (To be used only for expected output) :
2
5
2 2 2 2 2 
3
1 2 2

Output
2
1 2

*/





   int remove_duplicate(int A[],int N)
   {
        if (N==0)
        {
            return 0;
        }
        
        else
        {
           int r = 0;
           for (int i = 1; i < N; i ++) 
           {
             if (A[r] != A[i]) 
             {
                 A[++r] = A[i]; 
             }
           }
           return r + 1;
         }
    }
