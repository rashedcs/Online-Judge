#include <iostream>
using namespace std;
int main()
{
  int tc,n,r,s;
  cin >> tc;
  while(tc--)
  {
     cin >> n;
     r = n/2;
     s = n-r;
     cout<<r<< " " <<s<< endl;
  }
  return 0;
}
