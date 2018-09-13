#include <bits/stdc++.h>
using namespace std;

vector<int> vi(int n)
 {
        vector<int>fre(10);
        fill(fre.begin(), fre.end(), 0);
        
        for(int i=1; i<=n; i++) 
        {
                int x=i;
                while(x)
                {
                    fre[x%10]++;
                    x /= 10;
                }
        }
        return fre;
 }


int main()
{
      int tc, n;
      scanf("%d",&tc);
      while(tc--)
      {
             scanf("%d",&n);
             vector<int> arr = vi(n);
             for(int i=0; i<9; i++)
             {
                 printf("%d ", arr.at(i));
             }
             printf("%d\n", arr.at(9));
      }
      return 0;
}


