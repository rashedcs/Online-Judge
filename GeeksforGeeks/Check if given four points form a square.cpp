/*

Given coordinates of four points in a plane, find if the four points form a square or not.

Input:
The first line of input contains an integer T denoting the number of test cases.
Then T test cases follow. The first line of each test case contains 4 space separated integer points a , b , c , d

Output:
For each test case print 1 if the four points form a square else print 0.
Remember to output the answer of each test case in a new line.

Constraints:
1<=T<=100
1<=a,b,c,d<=100

Example:

Input:
2
20 20 20 10 10 20 10 10
10 10 10 10 20 10 20 30

Output:
1
0



*/




#include<bits/stdc++.h>
using namespace std;

int main()
{
   int tc;
   float  x1,y1,x2,y2,x3,y3,x4,y4;
   float x,y, a,b,c,d;
   cin>>tc;
   while(tc--)
   {

     cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

     x=(x1+x2+x3+x4)/4;
     y=(x1+y2+y3+y4)/4;


     a= sqrt(pow(fabs(y-y1),2)+pow(fabs(x-x1),2));
     b= sqrt(pow(fabs(y-y2),2)+pow(fabs(x-x2),2));
     c= sqrt(pow(fabs(y-y3),2)+pow(fabs(x-x3),2));
     d= sqrt(pow(fabs(y-y4),2)+pow(fabs(x-x4),2));

     if(a==b && b==c && c==d && d==a)          cout<<"1"<<endl;
     else                                      cout<<"0"<<endl;

  }

   return 0;
}
