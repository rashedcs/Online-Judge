/*
Given an integer x , Your task is to find the  square root of it. 
If x is not a perfect square, then return floor(√x)

Input:
You have to complete the method which takes 1 argument: the integer N. 
You should not read any input from stdin/console. There are multiple test cases. 
For each test cases, this method will be called individually.

Output:
Your function should return square root of given integer.

Constraints:
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000

Example:

Input
2
5
4

Output
2
2
*/


long long int floorSqrt(long long int x)
{
 int result;
 result = sqrt (x);
 return result;
}
