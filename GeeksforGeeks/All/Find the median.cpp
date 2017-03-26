/*

Given the marks of all students, calculate the median.

Input:
The first line of input takes the number of test cases, T. Then T test cases follow. Each of the T test cases takes 2 input lines.The first line of each test case takes the number of students, N.The second line of each test case takes N space separated integers denoting the marks of all the students.

Output:

Print the floor value of the median for each test case on a new line.

Constraints:
1<=T<=100
1<=N<=100
1<=Marks<=100

Example:

Input:
3
4
56 67 30 79
4
78 89 67 76
5
90 100 78 89 67

Output:
61
77
89

*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

  int tc, num, med, temp,arr[10];

  cin>>tc;
  while(tc--)
  {
     cin>>num;
     for(int i=0; i<num; i++) cin>>arr[i];

     sort(arr,arr+num);

    if(num%2)
    {
     temp=(num+1)/2;
     med=arr[temp-1];
    }

    else
    {
     temp=num/2;
     med=(arr[temp]+arr[temp-1])/2;
    }

     cout<<med<<endl;
  }
 return 0;
}
