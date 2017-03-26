/*
Given a number N, check if N is power of 4 or not.

Input:

You have to complete the method which takes 1 argument: the number N  .
You should not read any input from stdin/console. 
There are multiple test cases. For each test case, this method will be called individually.

Output:
Your function should return 1 if N is power of 4, else return 0.

Constraints:
1<=T<=50
1<=N<=100000000

Example:

Input:
2
64
75

Output:
1
0
*/

int isPowerOfFour(unsigned int n)
{
    
  if(n == 0)
  { 
    return 0;
  }

  else
  {
    while(n != 1)
    { 
      if(n%4 != 0)	return n = 0;
      else         	n = n/4;	 
    }
    return n;
  }
}
